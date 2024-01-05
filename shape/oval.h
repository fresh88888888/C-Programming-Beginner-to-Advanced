#ifndef OVAL_H
#define OVAL_H

#include <iostream>
#include "shape.h"

class Oval : public Shape
{

public:
    Oval() = default;
    Oval(double x_radius_param, double y_radius_param, std::string_view description_param);
    ~Oval();

    virtual void draw() const override
    {
        std::cout << "Oval::draw() called, Drawing " << m_description << " with x_radius : " << x_radius << " and y_radius : " << y_radius << std::endl;
    }

protected:
    double get_x_rad() const
    {
        return x_radius;
    }
    double get_y_rad() const
    {
        return y_radius;
    }

private:
    double x_radius{1.0};
    double y_radius{2.0};
};

Oval::Oval(double x_radius_param, double y_radius_param, std::string_view description_param)
    : x_radius(x_radius_param), y_radius(y_radius_param), Shape(description_param)
{
}

Oval::~Oval()
{
}

#endif