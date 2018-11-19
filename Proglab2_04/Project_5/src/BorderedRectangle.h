#include "Rectangle.h"

#ifndef BORDEREDRECTANGLE_H_
#define BORDEREDRECTANGLE_H_

class BorderedRectangle : public Rectangle{
	char border;
public:
	BorderedRectangle(int w, int h, char c);
	void Draw() const;
};

#endif /* BORDEREDRECTANGLE_H_ */
