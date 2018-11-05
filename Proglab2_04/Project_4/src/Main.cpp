#include <stdio.h>

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
		printf("Addigment: x:%d a:%d c:%d\n",x,a,c);
		return *this;
	}

	~Sample(){
		printf("Destructor: x:%d a:%d c:%d\n",x,a,c);
	}
};

int main() {
	Sample a;
	Sample b(1);
	Sample b1 = 2;
	Sample b2 = { 3 };
	Sample c(b);
	return 0;
}

