#pragma once

class Renderable
{
public:
	virtual void render(sf::RenderWindow &window){
		std::cout << "Base renderable\n";
	}
};
