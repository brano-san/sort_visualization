#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

#include "Entity.h"

class Column final : public Entity
{
public:
	Column() = default;

	Column(const float width, const float height, const float x, const float y);
	
	~Column() override = default;

	void draw(sf::RenderWindow& window) const override;

	void setColor(const sf::Color& color);

private:
	std::unique_ptr<sf::RectangleShape> _column;
};