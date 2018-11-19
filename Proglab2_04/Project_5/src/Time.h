#include <stdio.h>

#ifndef TIME_H_
#define TIME_H_

class Time {
	int hour;
	int minute;
public:
	const int &Hour;
	const int &Minute;
	Time(int h, int m);
	virtual ~Time(){}
	virtual void Print() const {
		printf("%d:%d",hour,minute);
	}
};

#endif
