#ifndef PARENT_H
#define PARENT_H

#include <iostream>

class Parent
{

public:
    Parent();
    Parent(int member_param);
    ~Parent();

    void print_var() const
    {
        std::cout << "The value in parent is : " << m_member_var << std ::endl;
    }

protected:
    int m_member_var{100};
};

Parent::Parent()
{
}
Parent::Parent(int member_param)
    : m_member_var(member_param)
{
}

Parent::~Parent()
{
}

#endif