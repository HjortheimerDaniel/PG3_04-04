#pragma once
#include "IShape.h"
#include <stdio.h>


class Circle: public IShape
{
public:

	void Size() override;
	void Draw() override;

private:

	int width = 5;
	int height = 7;
};

