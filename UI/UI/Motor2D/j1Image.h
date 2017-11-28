#pragma once
#ifndef _j1Image_H_
#define _j1Image_H_

#include "j1Gui.h"

struct SDL_Texture;
struct SDL_Rect;

class Image : public j1Gui
{
public:

	Image();
	Image(SDL_Rect* rect);
	~Image();

	// Called before the first frame
	bool Start();

	// Called each loop iteration
	bool PreUpdate();

	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

	void CreateImage(SDL_Rect* rect);
	bool Draw();

	

private:

	SDL_Rect* rect = nullptr;
	
};

#endif // !_j1Image_H_
