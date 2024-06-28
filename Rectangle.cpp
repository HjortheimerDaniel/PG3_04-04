#include "Rectangle.h"

void Rectangle::Size()
{
	size = height * width;
}

void Rectangle::Draw()
{
	printf("The rectangle is drawn, its size is %d\n", size);

}
