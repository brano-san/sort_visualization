#pragma once

#include <SFML/Graphics.hpp>

class Drawable
{
public:
	virtual ~Drawable() = default;

	virtual void draw(const sf::RenderWindow* window) = 0;
};
