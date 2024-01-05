#include <iostream>
#include "constant.h"
#include "cylinder.h"

int main()
{
    Cylinder cylinder_1(5.5, 8.4);
    std::cout << "volume 1 : " << cylinder_1.volume() << std::endl;
    std::cout << "base_radius : " << cylinder_1.get_base_radius() << std::endl;
    std::cout << "height :" << cylinder_1.get_height() << std::endl;

    // Heap object : . dereference and . notation
    Cylinder *cylinder_2 = new Cylinder(2.5, 3.4);
    std::cout << "volume 2 : " << (*cylinder_2).volume() << std::endl;
    std::cout << "volume 2 : " << cylinder_2->volume() << std::endl;

    //Managing a stack object through pointers
    Cylinder *cylinder_3 = &cylinder_1;
    std::cout << "volume 3 : " << (*cylinder_3).volume() << std::endl;

    delete cylinder_2; // Remeber to release memory from heap.
    return 0;
}