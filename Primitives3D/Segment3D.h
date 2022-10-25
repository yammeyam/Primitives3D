#pragma once
#include "Vector3D.h"
class Segment3D
{
    Vector3D start;
    Vector3D end;
public:
    Segment3D() {};
    Segment3D(Vector3D startValue, Vector3D endValue) :start{ startValue }, end{ endValue }{};
    Vector3D getStart();
    Vector3D getEnd();
    void setStart(Vector3D value);
    void setEnd(Vector3D value);
    double length();
    static Vector3D* Intersect(Segment3D s1, Segment3D s2);
};