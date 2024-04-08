#pragma once

class Updatable
{
public:
	virtual ~Updatable() = default;

	virtual void update(const double deltaTime) = 0;
};
