#pragma once
#include <vector>
#include <ctime>
#include "block.h"
#include "input.h"

namespace Engine
{
	std::vector<Block*> blocks;
	float delta;
	sf::Clock dClock;
	sf::RenderWindow window;
	std::string scene;
	sf::View myView;
	bool open()
	{
		return window.isOpen();
	}
	void draw(Renderable &obj)
	{
		obj.render(window);
	}
	void createWindow(float x, float y, std::string title)
	{
		myView.setCenter(x / 2, y / 2);
		myView.setSize(x, y);
		window.create(sf::VideoMode(x, y), title, sf::Style::Close);
		window.setView(myView);
	}
	void displayWindow()
	{
		window.display();
	}
	void clearWindow()
	{
		window.clear();
	}
	void update()
	{
		delta = dClock.restart().asSeconds();
		sf::Event event;
		while(window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed)
			{
				Input::keys[Input::keyToString(event.key.code)] = true;
			}
			if (event.type == sf::Event::MouseButtonPressed)
			{
				Input::keys[Input::keyToString(event.key.code)] = true;
			}
			if (event.type == sf::Event::KeyReleased)
			{
				Input::keys[Input::keyToString(event.key.code)] = false;
			}
			if (event.type == sf::Event::MouseButtonReleased)
			{
				Input::keys[Input::keyToString(event.key.code)] = false;
			}
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
	}
	void registerBlock(Block* block)
	{
		blocks.push_back(block);
	}
	void renderBlocks()
	{
		for(int i = 0; i < blocks.size(); i++)
		{
			blocks[i]->render(window);
		}
	}
};
