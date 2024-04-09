#include "Column.h"

Column::Column(const float width, const float height, const float x, const float y)
	: _column(new sf::RectangleShape(sf::Vector2f(width, height)))
{
	_column->setPosition(x, y);
}

void Column::draw(sf::RenderWindow& window) const
{
	window.draw(*_column);
}

void Column::setColor(const sf::Color& color)
{
	_column->setFillColor(color);
}
