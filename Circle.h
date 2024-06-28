#pragma once
#include "IShape.h"
#include <stdio.h>


class Circle: public IShape
{
public:

	void Size() override;
	void Draw() override;

private:

	float radius = 5.0f;
	float pi = 3.14f;
	float size;
};

