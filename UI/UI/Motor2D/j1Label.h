#pragma once
#ifndef _j1LABEL_H
#define _j1LABEL_H
#include "j1GuiElement.h"

struct SDL_Rect;
struct _TTF_Font;

class j1Label : public GuiElement
{
public:

	j1Label();
	j1Label(p2SString label);
	//~j1Label();

	// Called before render is available
	bool Awake(pugi::xml_node&);

	// Called before the first frame
	bool Start();

	// Called each loop iteration
	bool PreUpdate();

	bool Update(float dt);

	// Called before quitting
	bool CleanUp();

//	bool Draw();

	void CreateString();

	void InternalPosition(int x, int y);

	void Draw();
private:

	p2SString label;
	iPoint internal_position;
	

};


#endif // !j1_LABEL_H
