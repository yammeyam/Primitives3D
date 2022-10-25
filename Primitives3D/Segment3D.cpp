#include "Segment3D.h"

Vector3D Segment3D::getStart()
{
    return start;
}

Vector3D Segment3D::getEnd()
{
    return end;
}

void Segment3D::setStart(Vector3D value)
{
    start = value;
}

void Segment3D::setEnd(Vector3D value)
{
    end = value;
}

double Segment3D::length()
{
    return 0.0;//
}

Vector3D* Segment3D::Intersect(Segment3D s1, Segment3D s2)
{
    Vector3D p2p1 = s1.end - s1.start;
    Vector3D p4p3 = s2.end - s2.start;
    Vector3D p1p3 = s1.start - s2.start;
    double d1343 = Vector3D::dotProduct(p1p3, p4p3);
    double d4321 = Vector3D::dotProduct(p4p3, p2p1);
    double d1321 = Vector3D::dotProduct(p1p3, p2p1);
    double d4343 = Vector3D::dotProduct(p4p3, p4p3);
    double d2121 = Vector3D::dotProduct(p2p1, p2p1);
    double num = (d1343 * d4321 - d1321 * d4343);
    double denum = (d2121 * d4343 - d4321 * d4321);
    if (denum == 0) return nullptr;
    double mua = num / denum;
    double mub = (d1343 + mua * d4321) / d4343;
    Vector3D* pA = new(Vector3D);
    *pA = s1.start + mua * p2p1;
    Vector3D pB = s2.start + mub * p4p3;
    if (mua >= 0 && mua <= 1 && mub >= 0 && mub <= 1 && *pA == pB) {
        return pA;
    }
    else {
        return nullptr;
    }
}
