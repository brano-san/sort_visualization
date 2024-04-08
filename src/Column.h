#pragma once

#include <SFML/Graphics.hpp>

#include "Entity.h"

class Column final : public Entity
{
public:
	Column() = default;
	~Column() override = default;

	void update(const double time) override;
	void draw(const sf::RenderWindow* window) override;

private:

};