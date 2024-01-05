#include <iostream>

const double PI{3.141592653589793};

class Cylinder
{

public:
    Cylinder() = default;
    Cylinder(double param_radius, double param_height)
    {
        base_radius = param_radius;
        height = param_height;
    }

    double get_base_radius()
    {
        return base_radius;
    }

    double get_height()
    {
        return height;
    }

    void set_base_radius(double param_radius)
    {
        base_radius = param_radius;
    }

    void set_height(double param_height)
    {
        height = param_height;
    }

    double volume()
    {
        return PI * base_radius * base_radius * height;
    }

private:
    // Members variables
    double base_radius{2.5};
    double height{3.4};
};

int main()
{
    Cylinder cylinder;
    std::cout << "volume : " << cylinder.volume() << std::endl;
    std::cout << "base_radius : " << cylinder.get_base_radius() << std::endl;
    std::cout << "height :" << cylinder.get_height() << std::endl;

    Cylinder cylinder_1(5.5, 8.4);
    std::cout << "volume : " << cylinder_1.volume() << std::endl;
    std::cout << "base_radius : " << cylinder_1.get_base_radius() << std::endl;
    std::cout << "height :" << cylinder_1.get_height() << std::endl;
    
    return 0;
}