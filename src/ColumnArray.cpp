#include "ColumnArray.h"

ColumnArray::ColumnArray(std::size_t size)
{
	_columns = std::vector<Column>(size);
}

ColumnArray::~ColumnArray()
{

}

void ColumnArray::update()
{
	
}

void ColumnArray::draw(sf::RenderWindow& window)
{
	for (auto& column : _columns)
	{
		column.draw(window);
	}
}
