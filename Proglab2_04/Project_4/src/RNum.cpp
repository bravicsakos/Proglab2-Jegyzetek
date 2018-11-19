#include "RNum.h"
#include <stdio.h>

int gcd(int a, int b){
	while (a!=b){
		if(a>b){
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

RNum::RNum(int i) : p(i), q(1) {}

RNum::RNum(int p, int q){
	int gcd1 = gcd(p,q);
	this->p = p/gcd1;
	this->q = q/gcd1;
}

void RNum::print(){
	printf("%d/%d\n",p,q);
}

RNum RNum::add(const RNum &a, const RNum &b){
	return RNum((a.p * b.q) + (a.q * b.p),a.q*b.q);
}

RNum RNum::operator +(const RNum &a, const RNum &b){
	return RNum::add(a,b);
}

