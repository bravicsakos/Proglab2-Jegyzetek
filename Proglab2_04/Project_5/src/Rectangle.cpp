#include <stdio.h>
#include "Rectangle.h"

Rectangle::Rectangle(int w, int h) : width(w), height(h){}

int Rectangle::Area() const {
	Draw();
	printf("Area: %d\n", width * height);
	return width * height;
}

void Rectangle::Draw() const {
	for (int y = 0; y < height; y++){
		for (int x = 0; x < width; x++){
			printf("X");
		}
		printf("\n");
	}
}

