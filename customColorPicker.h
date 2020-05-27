#ifndef CUSTOMCOLORPICKER_H
#define CUSTOMCOLORPICKER_H 



#include "colorPicker.h"
#include "cs221util/HSLAPixel.h"
#include "point.h"
#include "center.h"
#include <cmath>
using namespace std;


class customcolorpicker: public colorPicker 
{
public: 

	customcolorpicker(double x); 


	virtual HSLAPixel operator()(point p);


private:
	double colorFactor; 






};

#endif
