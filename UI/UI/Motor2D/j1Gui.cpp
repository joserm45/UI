#include "p2Defs.h"
#include "p2Log.h"
#include "j1App.h"
#include "j1Render.h"
#include "j1Textures.h"
#include "j1Fonts.h"
#include "j1Input.h"
#include "j1Gui.h"
#include "j1Image.h"

j1Gui::j1Gui() : j1Module()
{
	name.create("gui");
}

// Destructor
j1Gui::~j1Gui()
{}

// Called before render is available
bool j1Gui::Awake(pugi::xml_node& conf)
{
	LOG("Loading GUI atlas");
	bool ret = true;

	atlas_file_name = conf.child("atlas").attribute("file").as_string("");
	atlas_file_name = "textures/test.png";

	return ret;
}

// Called before the first frame
bool j1Gui::Start()
{
	//images
	SDL_Rect testing = { 40, 100, 100, 100 };
	CreateImage(testing, 0, 0);

	atlas = App->tex->Load(atlas_file_name.GetString());

	p2List_item<GuiElement*>* item = elements.start;
	while (item != NULL)
	{
		item->data->Start();
		item = item->next;
	}

	return true;
}

// Update all guis
bool j1Gui::PreUpdate()
{
	p2List_item<GuiElement*>* item = elements.start;
	while (item != NULL)
	{
		item->data->PreUpdate();
		item = item->next;
	}
	return true;
}

// Called after all Updates
bool j1Gui::PostUpdate()
{
	p2List_item<GuiElement*>* item = elements.start;
	while (item != NULL)
	{
		item->data->PostUpdate();
		item = item->next;
	}
	return true;
}

// Called before quitting
bool j1Gui::CleanUp()
{
	p2List_item<GuiElement*>* item = elements.start;
	while (item != NULL)
	{
		item->data->CleanUp();
		item = item->next;
	}
	LOG("Freeing GUI");

	return true;
}

// const getter for atlas
SDL_Texture* j1Gui::GetAtlas() const
{
	return atlas;
}

// class Gui ---------------------------------------------------

void j1Gui::CreateImage(SDL_Rect rect, int x, int y)
{
	Image* image = new Image(rect);
	image->Start();
	image->SetPosition(x, y);
	elements.add((GuiElement*)image);
}

void j1Gui::DeleteImage(GuiElement* image)
{
	if (image != nullptr)
	{
		int find = elements.find(image);
		int current_position = 0;

		p2List_item<GuiElement*>* item = elements.start;
		while (item != NULL)
		{
			if (current_position == find)
			{
				elements.del(item);
				return;
			}
			item = item->next;
			current_position++;
		}
	}
}

void j1Gui::ManageEvent(GuiElement* element)
{
	
}

