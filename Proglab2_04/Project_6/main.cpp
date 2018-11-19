#include <stdio.h>
#include <iostream>
using namespace std;

class A {
public:
	int x;
	A() : x(0) {}
	A(int x) : x(x){}
	void printA() {cout << x << endl;}
};

class AB : public virtual A {
public:
	AB() : A(1){}
	void printAB() {cout << A::x << endl;}
};

class AC : public virtual A {
public:
	AC() : A(2){}
	void printAC() {cout << A::x << endl;}
};

class BCD : public virtual AB, public virtual AC {
public:
	BCD(){}
	void printBCD() {cout << AC::x << AB::x << endl;}
};

int main(){
	BCD x;
	x.printAB();
	x.printAC();
	x.printBCD();
	cout << sizeof(A) << endl;
	cout << sizeof(AB) << endl;
	cout << sizeof(AC) << endl;
	cout << sizeof(BCD) << endl;

	return 0;
}
