#ifndef CCURRENCY_H_
#define CCURRENCY_H_

class CCurrency {
	static int Instances;
	long Dollars;
	int Cents;
public:
	static int getInstances(){
		return Instances;
	}
	CCurrency(long dollars = 0, int cents = 0);
	virtual ~CCurrency();
	friend CCurrency add(const CCurrency &a,const CCurrency &b);
	void Print();
	int getCents() const{
		return this->Cents;
	}
	int getDollars() const{
		return this->Dollars;
	}
};

#endif
