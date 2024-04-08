#pragma once

#include "Drawable.h"
#include "Updatable.h"

class Entity : public Updatable, public Drawable
{
public:
	virtual ~Entity() override = default;
};
