#ifndef rollerballpen_h
#define rollerballpen_h
#include <string>

class RollerBallPen : public Pen{
public:
	RollerBallPen(std::string pen_name): Pen(pen_name) {}
	RollerBallPen() : Pen(std::string("RollerBallPen")){}
	virtual std::string drawLine();
	virtual std::string drawCircle();
};

#endif