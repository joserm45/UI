#include "j1Image.h"
#include "j1Render.h"
#include "j1Gui.h"

#include "SDL\include\SDL.h"

struct SDL_Rect;


Image::Image() : GuiElement()
{
	name.create("image");	
}

Image::Image(SDL_Rect rect) : GuiElement()
{
	name.create("image");
	this->rect = new SDL_Rect(rect);
}
Image::~Image()
{}

bool Image::Start()
{
	return true;
}

bool Image::PreUpdate()
{
	Draw();
	return true;
}

bool Image::PostUpdate()
{
	return true;
}

bool Image::CleanUp()
{
	return true;
}

void Image::SetInternalPosition(int x, int y)
{
	InternalPosition.x = x;
	InternalPosition.y = y;
}

void Image::Draw()
{
	App->render->Blit(App->gui->GetAtlas(), position.x, position.y, rect);
}