#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

#include "engineer.h"

class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, CivilEngineer &ci_engineer);

public:
    CivilEngineer();
    CivilEngineer(const CivilEngineer &source);
    CivilEngineer(std::string_view full_name_param, int age_param, const std::string_view address_param,
                  int contract_count_param, std::string speciality_param);
    ~CivilEngineer();

    void build_road()
    {
        add(12, 5);
        add(12, 23, 1);
    }

private:
    std::string m_speciality{"None"};
};

CivilEngineer::CivilEngineer()
{
    std::cout << "default constructor for CivilEngineer called..." << std::endl;
}

CivilEngineer::CivilEngineer(const CivilEngineer &source)
    : Engineer(source), m_speciality(source.m_speciality)
{
    std::cout << "customer constructor copy for CivilEngineer called ..." << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view full_name_param, int age_param, const std::string_view address_param,
                             int contract_count_param, std::string speciality_param)
    : Engineer(full_name_param, age_param, address_param, contract_count_param), m_speciality(speciality_param)
{
    std::cout << "customer constructor called for CivilEngineer ... " << std::endl;
}

CivilEngineer::~CivilEngineer()
{
    std::cout << "destructor for civilEngineer called ... " << std::endl;
}

std::ostream &operator<<(std::ostream &out, CivilEngineer &ci_engineer)
{
    out << "CivilEngineer [Full name : " << ci_engineer.get_full_name() << ", age : " << ci_engineer.get_age()
        << ", address : " << ci_engineer.get_address() << ", contract_count : " << ci_engineer.get_contract_count()
        << ", m_speciality : " << ci_engineer.m_speciality << "]";

    return out;
}

#endif