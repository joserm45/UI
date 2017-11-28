#include "j1Image.h"

#include "SDL\include\SDL.h"

struct SDL_Rect;


Image::Image() : j1Gui()
{
	name.create("image");	
}

Image::Image(SDL_Rect* rect) : j1Gui()
{
	name.create("image");
	this->rect = rect;
}
Image::~Image()
{}

bool Image::Start()
{
	return true;
}

bool Image::PreUpdate()
{
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

void Image::CreateImage(SDL_Rect* rect)
{
	this->rect = rect;
}