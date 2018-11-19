#ifndef RNUM_H_
#define RNUM_H_

class RNum {
	int p;
	int q;
public:
	RNum(int i = 0);
	RNum(int p, int q);
	void print();
	static RNum add(const RNum &a, const RNum &b);
	static RNum operator + (const RNum &a, const RNum &b);
	~RNum(){};
};

#endif
