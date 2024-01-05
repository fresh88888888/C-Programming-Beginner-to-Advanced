#include <iostream>

int main()
{
    int int_data{33};
    double double_data{55};

    // References
    int &ref_int_data{int_data};
    double &ref_double_data{double_data};

    // Print stuff out
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data : " << &int_data << std::endl;
    std::cout << "double_data : " << double_data << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl;

    // Declare pointer nd reference
    double double_value{12.34};
    double &ref_double_value{double_value};
    double *p_double_value{&double_value};

    // Reading
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    std::cout << "**********************" << std::endl;

    // Writting through pointer
    std::cout << std::endl;
    std::cout << "Writting through pointer : " << std::endl;

    *p_double_value = 15.44;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    // Writting through reference
    std::cout << std::endl;
    std::cout << "Writting through reference : " << std::endl;

    ref_double_value = 18.44;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;
}