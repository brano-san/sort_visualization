#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

class Program
{
public:
	Program(unsigned int width, unsigned int height);

	~Program() = default;

	int start()
	{
        while (_window->isOpen())
        {
            while (_window->pollEvent(*_event))
            {
                if (_event->type == sf::Event::Closed)
                    _window->close();
            }

            _window->clear();

            this->draw();

        	_window->display();
        }

        return EXIT_SUCCESS;
	}
private:
	std::unique_ptr<sf::RenderWindow> _window;
	std::unique_ptr<sf::Event> _event;
	std::unique_ptr<sf::Clock> _clock;

private:
    void draw()
    {
	    
    }
};