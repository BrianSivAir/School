/////////////////////
//WORK IN PROGRESS...
/////////////////////

#include <iostream>
#include "point2d.h"
using Point2D;
using namespace std;
int main()
{
Point2D p;
p.setX(1);
p.setY(1);
Point2D p2;
p2.setX(2);
p2.setY(2);
cout << p.distanceFrom(p2) << endl;
return 0;
}
