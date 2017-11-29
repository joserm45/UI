#include "j1Label.h"
#include "j1Fonts.h"
#include "j1Render.h"
#include "j1Gui.h"

#include "SDL\include\SDL.h"

j1Label::j1Label(/*iPoint pos,*/ p2SString label/*, _TTF_Font font*/) : GuiElement()
{
	name.create("label");
	//position = pos;
	name = label;
}
bool j1Label::Awake(pugi::xml_node& conf)
{
	return true;
}
bool j1Label::Start()
{
	
	return true;
}

bool j1Label::PreUpdate()
{
	
	return true;
}

bool j1Label::Update(float dt)
{

	return true;
}

bool j1Label::CleanUp()
{
	return true;
}

void j1Label::InternalPosition(int x, int y)
{
	internal_position.x = x;
	internal_position.y = y;
}

void j1Label::Draw()
{
	App->render->Blit(App->gui->GetAtlas(), internal_position.x, internal_position.y);
}

void j1Label::CreateString()
{

	
}