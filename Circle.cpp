#include "Circle.h"

void Circle::Size()
{
	size = radius * pi * pi;

}

void Circle::Draw()
{
	printf("The circle is drawn, its size is %.01f\n", size);

}
