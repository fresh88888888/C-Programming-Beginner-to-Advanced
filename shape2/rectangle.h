#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle() = default;
    Rectangle(double width, double height, std::string_view description);
    virtual ~Rectangle() = default;

    virtual double perimeter() const override
    {
        return 2 * m_width + 2 * m_height;
    }
    virtual double surface() const override
    {
        return m_width * m_height;
    }

private:
    double m_width{0};
    double m_height{0};
};

Rectangle::Rectangle(double width, double height, std::string_view description)
    : m_width(width), m_height(height), Shape(description)
{
}

#endif