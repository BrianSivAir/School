#include "point2d.h"
#include <cmath>
double Point2D::X() {
return x;
}
void Point2D::setX(double value) {
if (!std::isnan(value) && !std::isinf(value))
x = value;
else
x = 0;
}
double Point2D::Y() {
return y;
}
void Point2D::setY(double value) {
if (!std::isnan(value) && !std::isinf(value))
y = value;
else
y = 0;
}
double Point2D::distanceFrom(Point2D other)
{
return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}
