#pragma once
#include <SFML/Graphics.hpp>
#include "renderable.h"

class Object: public Renderable
{
public:
	float x, y, w, h;
	sf::Texture tex;
	sf::Sprite sprite;
	sf::View camera;
	bool colliding(Object* obj);
	void render(sf::RenderWindow& window);
	void updateCamera();
	virtual void update();
};

bool Object::colliding(Object* obj)
{
	if(x > obj->x && x < obj->x + obj->w && y > obj->y && y < obj->y + obj->h)
	{
		return true;
	}
	if(x + w > obj->x && x + w < obj->x + obj->w && y > obj->y && y < obj->y + obj->h)
	{
		return true;
	}
	if(x > obj->x && x < obj->x + obj->w && y + h > obj->y && y + h < obj->y + obj->h)
	{
		return true;
	}
	if(x + w > obj->x && x + w < obj->x + obj->w && y + h > obj->y && y + h < obj->y + obj->h)
	{
		return true;
	}
	return false;
}

void Object::render(sf::RenderWindow &window)
{
	sprite.setPosition(x, y);
	window.draw(sprite);
}

void Object::updateCamera()
{}

void Object::update()
{}
