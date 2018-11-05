#include <stdio.h>
#include <stdlib.h>
#include <math.h>

inline int max(int a, int b){
	return a > b ? a : b;
}

inline int min(int a, int b){
	return a < b ? a : b;
}

class Rectangle {
	int minX;
	int minY;
	int maxX;
	int maxY;


public:
	static char name[10];
	const int type;
	Rectangle(int wmax = 0,int hmax = 0, int hmin = 0,int wmin = 0) : type(10){
		set(wmin,wmax,hmin,hmax);
	}

	int Area()const {
		return (this->maxX-this->minX)*(this->maxY-this->minY);
	}

	void set(int wmin, int wmax, int hmin,int hmax);
};
char Rectangle::name[] = "Rectangle";

void Rectangle::set(int wmin, int wmax, int hmin,int hmax){
		this->minX = min(wmin,wmax);
		this->maxX = max(wmin,wmax);
		this->minY = min(hmin,hmax);
		this->maxY = max(hmin,hmax);
	}

int main(){

	Rectangle r1(20,20);
	Rectangle *r3 = new Rectangle(20,20);
	//Rectangle &r4 = r1;
	const Rectangle r2;
	printf("%d %d",r1.Area(),r2.Area());
	printf("\n%d %d",r1.type,r2.type);
	printf("\n%s",Rectangle::name);
	delete r3;

	/*int *i = (int *)malloc(sizeof(int));
	*i = 10;

	int *j = new int(13);
	*j = 12;

	int *tomb = new int[20];
	tomb[0] = 1;

	printf("%d %d",*i,tomb[2]);

	free(i);
	delete j;
	delete [] tomb;
	//delete tomb;  <--- csak elso elemet*/

	return 0;
}
