#include "Citrusfruit.cpp"
#include "lemon.h"

virtual const char * Lemon::getName(){ 
	return "Lemon Fruit";
};
virtual float Lemon::getPh(){ 
	return ph * 2.0; 
};