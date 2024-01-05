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
    Person(const Person &person);
    Person(std::string_view full_name_param, int age_param, const std::string_view address_param);
    ~Person();

    // Getters
    std::string get_full_name() const
    {
        return m_full_anme;
    }

    int get_age() const
    {
        return m_age;
    }

    std::string get_address() const
    {
        return m_address;
    }

    int add(int a, int b) const
    {
        return a + b;
    }

    int add(int a, int b, int c) const
    {
        return a + b + c;
    }

public:
    std::string m_full_anme{"None"};

protected:
    int m_age{0};

private:
    std::string m_address{"None"};
};

Person::Person()
{
    std::cout << "default constructor for person called.." << std::endl;
}
Person::Person(const Person &person)
    : m_full_anme(person.m_full_anme), m_age(person.m_age), m_address(person.m_address)
{
    std::cout << "customer constructor copy for Person called ... " << std::endl;
}
Person::Person(std::string_view full_name_param, int age_param, const std::string_view address_param)
    : m_full_anme(full_name_param), m_age(age_param), m_address(address_param)
{
    std::cout << "customer constructor called for Person ... " << std::endl;
}
Person::~Person()
{
    std::cout << "destructor for Person called ... " << std::endl;
}

std::ostream &operator<<(std::ostream &out, Person &person)
{
    out << "Person [" << person.m_full_anme << " " << person.get_age() << " " << person.get_address() << "] " << std::endl;
    return out;
}

#endif