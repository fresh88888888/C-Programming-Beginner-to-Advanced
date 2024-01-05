#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <string_view>

class Person
{

    friend std::ostream &operator<<(std::ostream &out, const Person &person);

public:
    Person();
    Person(std::string_view &first_name_param, std::string_view &last_name_param);

    // Geting
    std::string get_first_name() const
    {
        return first_name;
    }

    std::string get_last_name() const
    {
        return last_name;
    }

    // Setting
    void set_first_name(std::string_view fn)
    {
        first_name = fn;
    }

    void set_last_name(std::string_view ln)
    {
        last_name = ln;
    }

protected:
    std::string first_name{"Jones"};
    std::string last_name{"David"};
};

Person::Person()
{
}

Person::Person(std::string_view &first_name_param, std::string_view &last_name_param)
    : first_name(first_name_param), last_name(last_name_param)
{
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person [" << person.first_name << " " << person.last_name << "] " << std::endl;
    return out;
}

#endif