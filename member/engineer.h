#ifndef ENGINEER_H
#define ENGINEER_H

#include <iostream>
#include "person.h"

class Engineer : private Person
{

    friend std::ostream &operator<<(std::ostream &out, Engineer &engineer);

public:
    Engineer();
    Engineer(std::string_view full_name_param, int age_param, const std::string_view address_param, int contract_count_param);
    Engineer(const Engineer &engineer_param);
    ~Engineer();

    int get_contract_count() const
    {
        return contract_count;
    }

    void build_something()
    {
        m_full_anme = "John Snow";
        m_age = 23;
    }

public:
    using Person::add;

protected:
    using Person::get_address;
    using Person::get_age;
    using Person::get_full_name;

private:
    int contract_count{0};
};

Engineer::Engineer()
{
    std::cout << "default constructor for Engineer called.." << std::endl;
}

Engineer::Engineer(std::string_view full_name_param, int age_param, const std::string_view address_param, int contract_count_param)
    : Person(full_name_param, age_param, address_param), contract_count(contract_count_param)
{
    std::cout << "customer constructor called for Engineer ... " << std::endl;
}

Engineer::Engineer(const Engineer &engineer_param)
    : Person(engineer_param), contract_count(engineer_param.contract_count)
{
    std::cout << "customer constructor copy for Engineer called ..." << std::endl;
}
Engineer::~Engineer()
{
    std::cout << "destructor for Engineer called ... " << std::endl;
}

std::ostream &operator<<(std::ostream &out, Engineer &engineer)
{
    out << "Engineer [Full name : " << engineer.get_full_name() << ", age : " << engineer.get_age()
        << ", address : " << engineer.get_address() << ", contract_count : " << engineer.contract_count << "]";

    return out;
}

#endif