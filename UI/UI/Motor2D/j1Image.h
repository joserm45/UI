#pragma once
#ifndef _j1Image_H_
#define _j1Image_H_

#include "j1Gui.h"

struct SDL_Texture;
struct SDL_Rect;

class Image : public GuiElement
{
public:

	Image();
	Image(SDL_Rect rect);
	~Image();

	// Called before the first frame
	bool Start();

	// Called each loop iteration
	bool PreUpdate();

	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

	void SetInternalPosition(int x, int y);

	void Draw();

	

private:

	iPoint InternalPosition;

	SDL_Rect* rect;
	
};

#endif // !_j1Image_H_
