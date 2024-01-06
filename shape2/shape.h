#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string_view>

class Shape
{
protected:
    Shape() = default;
    Shape(std::string_view description);

public:
    virtual ~Shape() = default;
    // Pure virtual functions
    virtual double perimeter() const = 0;
    virtual double surface() const = 0;

private:
    std::string m_description{"None"};
};

Shape::Shape(std::string_view description)
    : m_description(description)
{
}

#endif