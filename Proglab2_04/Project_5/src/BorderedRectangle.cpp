#include <stdio.h>
#include "BorderedRectangle.h"
#include "Rectangle.h"

BorderedRectangle::BorderedRectangle(int w, int h, char c) : Rectangle(w,h){
	border = c;
}

void BorderedRectangle::Draw() const {
	for (int y = 0; y < height; y++){
			for (int x = 0; x < width; x++){
				printf("%c",y == 0 || y == height -1 || x == 0 || x == width - 1 ? border : 'X');
			}
		printf("\n");
	}
}
