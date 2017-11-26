#include "j1Label.h"
#include "j1Fonts.h"

#include "SDL\include\SDL.h"

struct SDL_Rect;
struct _TTF_Font;

j1Label::j1Label(iPoint pos, p2SString label, _TTF_Font font) : GuiElement()
{
	name.create("label");
	position = pos;
	name = label;
}
bool j1Label::Awake(pugi::xml_node& conf)
{

}
void j1Label::CreateString()
{

	
}