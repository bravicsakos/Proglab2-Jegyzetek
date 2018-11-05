#include "CCurrency.h"
#include <stdio.h>

int CCurrency::Instances = 0;

CCurrency::CCurrency(long dollars, int cents) :
		Dollars(dollars + (cents / 100)),
		Cents(cents % 100)
		{CCurrency::Instances++;}

CCurrency::~CCurrency()
		{CCurrency::Instances--;}

void CCurrency::Print(){
	printf("$ %ld.%d\n",this->Dollars, this->Cents);
}

CCurrency add(const CCurrency &a,const CCurrency &b){
	int cents = a.Cents + b.Cents;
	long dollars = a.Dollars + b.Dollars;
	CCurrency c(dollars, cents);
	return c;
}



