#ifndef CICLE_H
#define CICLE_H

#include "shape.h"

class Cicle : public Shape
{
public:
    Cicle() = default;
    Cicle(double radius, std::string_view description);
    virtual ~Cicle() = default;

    virtual double perimeter() const override
    {
        return 2 * PI * m_radius;
    }
    virtual double surface() const override
    {
        return PI * m_radius * m_radius;
    }

private:
    double m_radius{0};

    inline static double PI = 3.1415926;
};

Cicle::Cicle(double radius, std::string_view description)
    : m_radius(radius), Shape(description)
{
}

#endif