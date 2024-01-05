#ifndef CYLINDER_H
#define CYLINDER_H

#include "constant.h"

class Cylinder
{

public:
    Cylinder() = default;
    Cylinder(double param_radius, double param_height)
    {
        base_radius = param_radius;
        height = param_height;
    }

    double volume()
    {
        return PI * base_radius * base_radius * height;
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

private:
    // Members variables
    double base_radius{2.5};
    double height{3.4};
};

#endif