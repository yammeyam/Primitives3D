// Primitives3D.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Segment3D.h"


int main()
{
    Vector3D vect1;//(-3,-2,0);
    Vector3D vect2;// (0, 2, 0);
    Vector3D vect3;// (0, -3, 0);
    Vector3D vect4;// (-3, 1, 0);
    int x, y, z;
    std::cout << "Enter the coordinates of the first segment start point separated by a space like: x y z" << std::endl;
    std::cin >> x >> y >> z;
    vect1.setCoords(x, y, z);
    vect1.print();
    std::cout << "Enter the coordinates of the first segment end point separated by a space like: x y z" << std::endl;
    std::cin >> x >> y >> z;
    vect2.setCoords(x, y, z);
    vect2.print();

    std::cout << "Enter the coordinates of the second segment start point separated by a space like: x y z" << std::endl;
    std::cin >> x >> y >> z;
    vect3.setCoords(x, y, z);
    vect3.print();
    std::cout << "Enter the coordinates of the second segment end point separated by a space like: x y z" << std::endl;
    std::cin >> x >> y >> z;
    vect4.setCoords(x, y, z);
    vect4.print();
    Segment3D s1(vect1, vect2);
    Segment3D s2(vect3, vect4);
    Vector3D* a;
    a = Segment3D::Intersect(s1, s2);
    if (a != nullptr) {
        std::cout << "The intersection point is ";
        a->print();
    }
    else std::cout << "Segments don't intersect or has an infinite number of intersection points";

}

