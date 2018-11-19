#include <stdio.h>
#include "RNum.h"

class Sample {
	int x;
	int a; //assignments
	int c; //copies

public:
	Sample() :x(0),a(0),c(0) {
		printf("Default Constructor: x:%d a:%d c:%d\n",x,a,c);
	}

	Sample(int x) : x(x), a(0), c(0) {
		printf("Conversion Constructor: x:%d a:%d c:%d\n",x,a,c);
	}

	Sample(const Sample &copy) : x(copy.x), a(copy.a), c(copy.c + 1){
		printf("Copy Constructor: x:%d a:%d c:%d\n",x,a,c);
	}

	Sample & operator = (const Sample &assign) {
		x = assign.x;
		a = assign.a + 1;
		c = assign.c;
		printf("Assigment: x:%d a:%d c:%d\n",x,a,c);
		return *this;
	}

	int operator == (const Sample &compare){
		return this->x == compare.x ? 1 : 0;
	}

	friend Sample foo(const Sample & value);

	~Sample(){
		printf("Destructor: x:%d a:%d c:%d\n",x,a,c);
	}
};

Sample foo(const Sample & value){
	Sample temp = -value.x;
	return temp;
}

int main() {
	/*Sample a;
	Sample b(1);
	Sample b1 = 2;
	Sample b2 = { 3 };
	Sample c(b);
	printf("before foo\n");
	a = foo(a);
	printf("after foo\n");
	*/
	RNum a;
	RNum b(6,9);
	RNum c(10,15);
	a.print();
	b.print();
	c.print();
	RNum q;
	q = operator+(b,c);
	q.print();
	return 0;
}

