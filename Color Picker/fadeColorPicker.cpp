#include "fadeColorPicker.h"
#include <math.h>

fadeColorPicker::fadeColorPicker(double fade)
{
    /* your code here */
  fadeFactor = fade;
}

HSLAPixel fadeColorPicker::operator()(point p)
{
    /* your code here */
  HSLAPixel np;
  np.h = p.c.color.h;
  np.s = p.c.color.s;
  int xdist = p.x - p.c.x;
  int ydist = p.y - p.c.y;
  double dist = sqrt((xdist * xdist) + (ydist * ydist));
  np.l = p.c.color.l * (pow(fadeFactor, dist));
  return np;

}
