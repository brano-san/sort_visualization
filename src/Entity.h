#pragma once

class Entity
{
public:
	virtual ~Entity() = default;

	virtual void draw(sf::RenderWindow& window) const = 0;
};
