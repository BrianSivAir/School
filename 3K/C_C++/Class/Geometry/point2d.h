#ifndef POINT_2D_H
#define POINT_2D_H
class Point2D
{
public:
double X();
void setX(double value);
double Y();
void setY(double value);
double distanceFrom(Point2D other);
private:
double x;
double y;
};
#endif // POINT_2D_H
