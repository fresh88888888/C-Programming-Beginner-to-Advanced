#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string_view>
#include <string>

class Shape
{
public:
    Shape() = default;
    Shape(const std::string_view description_param);
    ~Shape();

    virtual void draw() const
    {
        std::cout << "Shape::draw() called. Drawing " << m_description << std::endl;
    }

protected:
    std::string m_description{""};
};

Shape::Shape(const std::string_view description_param)
    : m_description(description_param)
{
}
Shape::~Shape()
{
}

#endif