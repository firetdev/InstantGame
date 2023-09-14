#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include "engine.h"

class Character: public Object
{
public:
	bool onGround, onWall, hasCamera;
	float imgScale, scale;
	void setupCamera(int, int, int, int);
	void scaleBy(float);
	void setImgScale(float);
	void move(float, float);
	void setup(std::string, float, float, float, float);
	void setCam(int, int);
};

void Character::setupCamera(int cx, int cy, int cw, int ch)
{
	camera.setCenter(sf::Vector2f(cx + x, cy + y));
	camera.setSize(sf::Vector2f(cw, ch));
	hasCamera = true;
	Engine::myView.setCenter(sf::Vector2f(cx + x, cy + y));
}

void Character::scaleBy(float s)
{
	scale = s;
	w *= scale;
	h *= s;
}

void Character::setImgScale(float s)
{
	sprite.setScale(sf::Vector2f(s, s));
}

void Character::move(float mx, float my)
{
	onWall = false;
	onGround = false;
	bool canX = true, canY = true;
	for(int i = 0; i < Engine::blocks.size(); i++)
	{
		x += mx * Engine::delta;
		if(colliding(Engine::blocks[i]))
		{
			canX = false;
			onWall = true;
		}
		x -= mx * Engine::delta;
		y += my * Engine::delta;
		if(colliding(Engine::blocks[i]))
		{
			canY = false;
			onGround = true;
		}
		y -= my * Engine::delta;
	}
	if(canX)
	{
		x += mx * Engine::delta;
		if(hasCamera)
		{
			Engine::myView.move(mx * Engine::delta, 0);
		}
	}
	if(canY)
	{
		y += my * Engine::delta;
		if(hasCamera)
		{
			Engine::myView.move(0, my * Engine::delta);
		}
	}
	if(hasCamera)
	{
		Engine::myView.setSize(camera.getSize());
		Engine::window.setView(Engine::myView);
	}
}

void Character::setup(std::string path, float sx, float sy, float sw, float sh)
{
	tex.loadFromFile(path);
	sprite.setTexture(tex);
	x = sx;
	y = sy;
	w = sw;
	h = sh;
	onGround = false;
	onWall = false;
	hasCamera = false;
	imgScale = 1;
	scale = 1;
	sprite.setPosition(x, y);
}

void Character::setCam(int cx, int cy)
{
	if(hasCamera)
	{
		Engine::myView.setCenter(cx, cy);
	}
}
