#include "Vector3D.h"



double Vector3D::x() const
{
    return X;
}

double Vector3D::y() const
{
    return Y;
}

double Vector3D::z() const
{
    return Z;
}

void Vector3D::setX(double xValue)
{
    X = xValue;
}

void Vector3D::setY(double yValue)
{
    Y = yValue;
}

void Vector3D::setZ(double zValue)
{
    Z = zValue;
}

void Vector3D::setCoords(double xValue, double yValue, double zValue)
{
    X = xValue;
    Y = yValue;
    Z = zValue;
}

double Vector3D::magnitude()
{
    return sqrt(X * X + Y * Y + Z * Z);
}

void Vector3D::print()
{
    std::cout << "X=" << X << " Y=" << Y << " Z=" << Z << std::endl;
}

double Vector3D::dotProduct(Vector3D v1, Vector3D v2)
{
    return v1.x() * v2.x() + v1.y() * v2.y() + v1.z() * v2.z();
}

Vector3D Vector3D::crossProduct() 
{
    return Vector3D();//TODO
}

double Vector3D::angle(Vector3D v1, Vector3D v2)    
{
    return 0.0;//TODO
}

Vector3D& Vector3D::operator=(const Vector3D& right)
{
    if (this == &right) {
        return *this;
    }
    X = right.X;
    Y = right.Y;
    Z = right.Z;
    return *this;
}

const Vector3D operator-(const Vector3D& v1, const Vector3D& v2)
{
    return Vector3D(v1.X - v2.X, v1.Y - v2.Y, v1.Z - v2.Z);
}

const Vector3D operator+(const Vector3D& v1, const Vector3D& v2)
{
    return Vector3D(v2.X + v1.X, v2.Y + v1.Y, v2.Z + v1.Z);
}

const Vector3D operator*(const double& value, const Vector3D& v2)
{
    return Vector3D(v2.X * value, v2.Y * value, v2.Z * value);
}

bool operator==(const Vector3D& v1, const Vector3D& v2)
{
    Vector3D distance = v2 - v1;
    if (distance.magnitude() < constants::eps) return true;
    else return false;
}
