#include "CustomColorPicker.h"
#include <math.h>

customcolorpicker::customcolorpicker(double fade)
{
    /* your code here */
  colorFactor = fade;
}

HSLAPixel customcolorpicker::operator()(point p)
{
    /* your code here */
  HSLAPixel np;
  np.h = p.c.color.h;
  np.s = p.c.color.s;
  np.l = p.c.color.l; 
  int xdist = p.x - p.c.x;
  int ydist = p.y - p.c.y;
  double dist = sqrt((xdist * xdist) + (ydist * ydist));
  np.h = p.c.color.h * (colorFactor + dist);
  return np;

}





