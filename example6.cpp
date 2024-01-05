#include <iostream>

int main()
{
    // Non const reference
    std::cout << "Non const reference : " << std::endl;
    int age{27};
    int &ref_age{age};

    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    // Can modify original variable through reference

    std::cout << std::endl;
    std::cout << "Modify original variable through reference : " << std::endl;

    ref_age++;

    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    // const reference
    std::cout << std::endl;
    std::cout << "Const references : " << std::endl;

    age = 30;
    const int &const_ref_age{age};

    std::cout << "age: " << age << std::endl;
    std::cout << "const_ref_age : " << const_ref_age << std::endl;

    // Can achieve the same things as const ref with pointer : const pointer to const data
    // Remember that a reference y default is just like 

    return 0;
}