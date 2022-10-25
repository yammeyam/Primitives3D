#pragma once
#include <iostream>
#include "constants.h"

class Vector3D
{
    double X;
    double Y;
    double Z;
public:
    Vector3D() : X{ 0 }, Y{ 0 }, Z{ 0 }{};
    Vector3D(double xValue, double yValue, double zValue) : X{ xValue }, Y{ yValue }, Z{ zValue }{};
    double x() const;
    double y() const;
    double z() const;
    void setX(double xValue);
    void setY(double yValue);
    void setZ(double zValue);
    void setCoords(double xValue, double yValue, double zValue);
   
    double magnitude();
    void print();
    
    static double dotProduct(Vector3D v1, Vector3D v2);
    static Vector3D crossProduct();
    static double angle(Vector3D v1, Vector3D v2);
    
    Vector3D& operator=(const Vector3D& right);
    friend const Vector3D operator-(const Vector3D& v1, const Vector3D& v2);
    friend const Vector3D operator+(const Vector3D& v1, const Vector3D& v2);
    friend const Vector3D operator*(const double& value, const Vector3D& v2);
    friend bool operator==(const Vector3D& v1, const Vector3D& v2);
};