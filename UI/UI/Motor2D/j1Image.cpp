#include "j1Image.h"

#include "SDL\include\SDL.h"

struct SDL_Rect;


j1Image::j1Image() : j1Gui()
{
	name.create("image");
		
}

j1Image::j1Image(SDL_Rect rect) : j1Gui()
{
	SDL_Rect rect = rect;
	
}
j1Image::~j1Image()
{}

bool j1Image::Awake(pugi::xml_node&)
{

}

bool j1Image::Start()
{

}

bool j1Image::PreUpdate()
{

}

bool j1Image::Update(float dt)
{

}

void j1Image::CreateImage(SDL_Rect rect)
{
	this->rect = rect;
}