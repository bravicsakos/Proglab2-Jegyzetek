#include "Time.h"

Time::Time(int h, int m) : Hour(hour), Minute(minute){
	hour = h + m/60;
	minute = m % 60;
}


