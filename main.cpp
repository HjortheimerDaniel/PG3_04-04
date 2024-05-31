#include <stdio.h>
#include "IShape.h"
#include "Rectangle.h"
#include "Circle.h"


int main() {

	IShape* iShape[2];

	iShape[0] = new Rectangle();
	iShape[1] = new Circle();

	for (int i = 0; i < 2; i++)
	{
		iShape[i]->Size();
		iShape[i]->Draw();
		
	}

	for (int i = 0; i < 2; i++)
	{
		delete iShape[i];

	}

	return 0; }