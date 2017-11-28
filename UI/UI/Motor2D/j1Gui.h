#ifndef __j1GUI_H__
#define __j1GUI_H__

#include "j1Module.h"
#include "j1GuiElement.h"

#define CURSOR_WIDTH 2

struct SDL_Texture;
struct SDL_Rect;

// TODO 1: Create your structure of classes

// ---------------------------------------------------
class j1Gui : public j1Module
{
public:

	j1Gui();

	// Destructor
	virtual ~j1Gui();

	// Called when before render is available
	bool Awake(pugi::xml_node&);

	// Call before first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called after all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

	// TODO 2: Create the factory methods
	// Gui creation functions

	SDL_Texture* GetAtlas() const;

	//creates and deletes
	void CreateImage(SDL_Rect* rect, int x, int y);

	void DeleteImage(GuiElement* image);

private:

	SDL_Texture* atlas;
	p2SString atlas_file_name;
	p2List<GuiElement*> elements;
};

#endif // __j1GUI_H__