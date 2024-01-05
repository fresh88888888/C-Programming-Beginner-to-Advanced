#include<iostream>
#include "person.h"
#include "engineer.h"
#include "civilEngineer.h"

int main()
{
    /*
    Person person("John Snow", 27, "Winterfell Cold 33st#75");
    std::cout << "person : " << person << std::endl;

    Engineer engineer("John Park", 27, "Winterfell Cold 33st#78", 23);
    std::cout << "engineer : " << engineer << std::endl;

    CivilEngineer ci_engineer("John David", 27, "Winterfell Cold 45st#67", 23, "talk about");
    std::cout << "ci_engineer : " << ci_engineer << std::endl;
    */
    Engineer engineer("John Park", 27, "Winterfell Cold 33st#78", 23);
    std::cout << "engineer : " << engineer << std::endl;

    std::cout << "-------------------------" << std::endl;

    Engineer engineer_2(engineer);
    std::cout << "engineer_2 : " << engineer_2 << std::endl;

    std::cout << "-------------------------" << std::endl;

    CivilEngineer ci_engineer("John David", 27, "Winterfell Cold 45st#67", 23, "talk about");
    std::cout << "ci_engineer : " << ci_engineer << std::endl;

    CivilEngineer ci_engineer_2(ci_engineer);
    std::cout << "ci_engineer_2 : " << ci_engineer_2 << std::endl;

    return 0;
}