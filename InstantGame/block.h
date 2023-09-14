#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include "object.h"

class Block: public Object
{
public:
	Block(std::string, float, float, float, float);
};

Block::Block(std::string path, float sx, float sy, float sw, float sh)
{
	tex.loadFromFile(path);
	sprite.setTexture(tex);
	x = sx;
	y = sy;
	w = sw;
	h = sh;
	sprite.setPosition(x, y);
}
