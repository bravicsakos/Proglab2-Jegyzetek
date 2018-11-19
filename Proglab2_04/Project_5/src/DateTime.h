#include "Date.h"
#include "Time.h"

#ifndef DATETIME_H_
#define DATETIME_H_

class DateTime : public Date, public Time {
public:
	DateTime(int y, int m, int d, int h, int min) : Date(y,m,d), Time(h,min){}
	virtual ~DateTime(){}
	void Print() const {
		Date::Print();
		printf(" ");
		Time::Print();
	}
};

#endif
