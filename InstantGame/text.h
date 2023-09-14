#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "renderable.h"

class Text: public Renderable
{
public:
	int x, y, size;
	sf::Color color;
	sf::Font font;
	sf::Text text;
	void render(sf::RenderWindow &window);
	Text(std::string, int, int, int, std::string, std::vector<int>);
};

void Text::render(sf::RenderWindow &window)
{
	text.setPosition(x, y);
	window.draw(text);
}

Text::Text(std::string msg, int sx, int sy, int ss, std::string path, std::vector<int> clr)
{
	font.loadFromFile(path);
	text.setFont(font);
	text.setString(msg);
	text.setPosition(sx, sy);
	x = sx;
	y = sy;
	text.setCharacterSize(ss);
	size = ss;
	color = sf::Color(sf::Uint8(clr[0]), sf::Uint8(clr[1]), sf::Uint8(clr[2]));
	text.setFillColor(color);
	text.setOutlineColor(color);
}
