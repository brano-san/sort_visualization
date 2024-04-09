#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

#include "ColumnArray.h"

class Program
{
public:
	Program(unsigned int width, unsigned int height);

	~Program() = default;

	int start();

private:
	std::unique_ptr<sf::RenderWindow> _window;
	std::unique_ptr<sf::Event> _event;

	std::unique_ptr<sf::Clock> _clock;
    sf::Time _deltaTime;

	ColumnArray _colomns;
private:
    void update();
    void draw();
};