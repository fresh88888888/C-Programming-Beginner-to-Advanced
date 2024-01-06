#include <iostream>
#include "cicle.h"
#include "rectangle.h"

int main()
{
    const Shape *shape_ptr = new Rectangle(12.9, 9.8, "rectagnle");
    double surface = shape_ptr->surface();
    std::cout << "dynamic type of shape_ptr is : " << typeid(*shape_ptr).name() << std::endl;
    std::cout << "The surface of shape rect is : " << surface << std::endl;

    std::cout << "-----------------------" << std::endl;

    const Shape *shape_cicle = new Cicle(15.8, "cicle");
    surface = shape_cicle->surface();
    std::cout << "dynamic type of shape_cicle is : " << typeid(*shape_cicle).name() << std::endl;
    std::cout << "The surface of shape cicle is : " << surface << std::endl;
    return 0;
}