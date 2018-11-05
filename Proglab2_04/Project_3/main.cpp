#include <stdio.h>
#include "CCurrency.h"

int main(){
	CCurrency c(13,125);
	CCurrency c1(100);
	c1 = 120;
	CCurrency *p = new CCurrency(72,512);
	CCurrency plus = add(c,c1);
	c.Print();
	c1.Print();
	plus.Print();
	p->Print();
	printf("%d",c.getInstances());
	delete p;
	return 0;
}
