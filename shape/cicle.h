#ifndef CICLE_H
#define CICLE_H

#include <iostream>
#include "oval.h"

class Cicle : public Oval
{
public:
    Cicle() = default;
    Cicle(double radius, std::string_view description_param);
    ~Cicle();

    virtual void draw() const override
    {
        std::cout << "Cicle::draw() called. Drawing " << m_description << " with radius : " << get_x_rad() << std::endl;
    }

    virtual void draw(const double radius) const
    {
        std::cout << "Cicle::draw() called. Drawing " << m_description << " with radius : " << radius << std::endl;
    }
};

Cicle::Cicle(double radius, std::string_view description_param)
    : Oval(radius, radius, description_param)
{
}

Cicle::~Cicle()
{
}

#endif