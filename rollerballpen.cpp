#include "rollerballpen.h"

virtual std::string RollerBallPen::drawLine() {
	return getName().append(" draws a line.");
}
virtual std::string RollerBallPen::drawCircle(){
	return getName().append(" draws a circle.");
}