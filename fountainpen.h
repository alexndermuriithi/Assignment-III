#ifndef fountainpen.h
#define fountainpen.h
#include <string>

class FountainPen : public Pen {
public:
	FountainPen(std::string pen_name): Pen(pen_name) {}
	FountainPen() : Pen(std::string("FountainPen")){}
	virtual std::string drawLine();
	virtual std::string drawCircle();
};

#endif