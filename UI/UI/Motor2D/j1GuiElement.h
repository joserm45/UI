#pragma once
#ifndef _j1GuiElement_H_
#define _j1GuiElement_H_

#include "j1App.h"
#include "p2Point.h"

class GuiElement
{

public:

	GuiElement() {};
	virtual ~GuiElement() {};

	// Called before render is available
	virtual bool Awake()
	{
		return true;
	}

	// Called before the first frame
	virtual bool Start()
	{
		return true;
	}

	// Called each loop iteration
	virtual bool PreUpdate()
	{
		return true;
	}

	// Called each loop iteration
	virtual bool Update(float dt)
	{
		return true;
	}

	// Called each loop iteration
	virtual bool PostUpdate()
	{
		return true;
	}

	// Called before quitting
	virtual bool CleanUp()
	{
		return true;
	}

	//virtual load/save function
	virtual bool Load(pugi::xml_node&)
	{
		return true;
	}

	virtual bool Save(pugi::xml_node&)const
	{
		return true;
	}

	//non inherited funcitons

	virtual void Draw() {};

	virtual void SetSize(int width, int height) 
	{
		size.x = width;
		size.y = height;
	}

	virtual void SetPosition(int x, int y) 
	{
		position.x = x;
		position.y = y;
	}

	virtual void SetScale(float scale)
	{
		this->scale = scale;
	}

	virtual void Event() {};

public:

	iPoint						position;
	iPoint						size;
	float						scale;

	p2SString					name;

};

#endif