#include <stdio.h>
#include "Rectangle.h"
#include "BorderedRectangle.h"
#include "Date.h"
#include "Time.h"
#include "DateTime.h"

int main() {
	/*Rectangle r(10,4);
	r.Area();
	printf("\n");
	BorderedRectangle br(6,6,'*');
	br.Area();
	printf("\n");
	Rectangle c = br;
	c.Area();
	printf("\n");
	Rectangle &r1 = br;
	r1.Area();*/

	Date d(1997,4,6);
	Time t(12,75);
	DateTime dt(1997,4,6,12,75);
	dt.Print();
	printf("\n");
	Time t1 = dt;
	Date d1 = dt;
	t1.Print();
	printf("\n");
	d1.Print();
	return 0;
}
