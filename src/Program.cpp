#include "Program.h"

Program::Program(const unsigned int width, const unsigned int height)
{
	_window = std::unique_ptr<sf::RenderWindow> {
		new sf::RenderWindow(sf::VideoMode(width, height), "Sort Visualization")
	};

	_event = std::unique_ptr<sf::Event> { new sf::Event() };

	_clock = std::unique_ptr<sf::Clock> { new sf::Clock };
}
