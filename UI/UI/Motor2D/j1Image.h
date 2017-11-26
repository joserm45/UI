#pragma once
#ifndef _j1Image_H_
#define _j1Image_H_

#include "j1Gui.h"

struct SDL_Texture;
struct SDL_Rect;

class j1Image : public j1Gui
{
public:

	j1Image();
	j1Image(SDL_Rect rect);
	~j1Image();

	// Called before render is available
	bool Awake(pugi::xml_node&);

	// Called before the first frame
	bool Start();

	// Called each loop iteration
	bool PreUpdate();

	bool Update(float dt);

	// Called before quitting
	bool CleanUp();

	void CreateImage(SDL_Rect);
	bool Draw();

	

private:
	SDL_Rect rect;
	
};

#endif // !_j1Image_H_
