#pragma once
#include <functional>
#include <vector>

#include "Column.h"

class ColumnArray
{
public:
	ColumnArray() = default;

	ColumnArray(std::size_t size);

	~ColumnArray();

	void update();
	void draw(sf::RenderWindow& window);

private:
	std::vector<Column> _columns;
};
