#include "Program.h"

Program::Program(const unsigned int width, const unsigned int height)
	: _colomns(1)
{
	_window = std::unique_ptr<sf::RenderWindow> {
		new sf::RenderWindow(sf::VideoMode(width, height), "Sort Visualization")
	};

	_event = std::unique_ptr<sf::Event> { new sf::Event() };

	_clock = std::unique_ptr<sf::Clock> { new sf::Clock };
}

int Program::start()
{
	while (_window->isOpen())
	{
		while (_window->pollEvent(*_event))
		{
			if (_event->type == sf::Event::Closed)
				_window->close();
		}

		_deltaTime = _clock->restart();

		this->update();

		_window->clear();
		this->draw();
		_window->display();
	}

	return EXIT_SUCCESS;
}

void Program::update()
{

}

void Program::draw()
{
}
