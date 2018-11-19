#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle {

public:
	int width;
	int height;
	Rectangle(int w, int h);
	virtual ~Rectangle(){}
	int Area() const;
	virtual void Draw() const;
};

#endif
