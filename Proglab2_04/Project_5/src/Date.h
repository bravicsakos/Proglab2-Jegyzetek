#include <stdio.h>
#ifndef DATE_H_
#define DATE_H_

class Date {
	int year;
	int month;
	int day;
public:
	const int &Year;
	const int &Month;
	const int &Day;
	Date(int y, int m, int d) : Year(year), Month(month), Day(day) {
		year = y;
		month = m;
		day = d;
	}
	virtual ~Date(){}
	virtual void Print() const {
		printf("%d.%d.%d.",year,month,day);
	}
};

#endif
