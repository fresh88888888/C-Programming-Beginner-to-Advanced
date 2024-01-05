#ifndef CHILD_H
#define CHILD_H

#include <iostream>
#include "parent.h"

class Child : public Parent
{
public:
    Child();
    Child(int member_param);
    ~Child();

    void print_var() const
    {
        std::cout << "the value in child is : " << m_member_var << std::endl;
    }

    void show_values() const
    {
        std::cout << "the value in child is : " << m_member_var << std::endl;
        // The value in parent must be in accessible scope from the derived class.
        std::cout << "the value in parent is : " << Parent::m_member_var << std::endl;
    }

private:
    int m_member_var{1000};
};

Child::Child()
{
}

Child::Child(int member_param)
    : m_member_var(member_param)
{
}

Child::~Child()
{
}

#endif