#include <iostream>
#include <cmath>

int main()
{
    auto result = (10 <=> 20) > 0;
    auto var3{33};
    var3 = -22;

    std::cout << result << std::endl;
    std::cout << "var3: " << var3 << std::endl;

    double double_var{498.32};

    std::cout << "double_var different base : " << std::endl;
    std::cout << "double_var(dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var(hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var(oct) : " << std::oct << double_var << std::endl;

    // upcase and noupcase
    int post_int = 717171;

    std::cout << "post_int (noshowbase : default) : " << std::endl;
    std::cout << "post_int (dec) : " << std::dec << post_int << std::endl;
    std::cout << "post_int (hex) : " << std::hex << post_int << std::endl;
    std::cout << "post_int (oct) : " << std::oct << post_int << std::endl;

    std::cout << "post_int (showbase) : " << std::endl;
    std::cout << std::showbase;
    std::cout << "post_int (dec) : " << std::dec << post_int << std::endl;
    std::cout << "post_int (hex) : " << std::hex << post_int << std::endl;
    std::cout << "post_int (oct) : " << std::oct << post_int << std::endl;

    std::cout << "Log ; to get 54.99, you would elevate e to the power of : " << std::log(54.99) << std::endl;
    std::cout << "To get 1000, you'd need to elevate 10 to the power of : " << std::log10(10000) << std::endl;

    std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;

    // Use expression as condition directly
    std::cout << std::endl;
    std::cout << "Using expression as condition : " << std::endl;

    int number1{23};
    int number2{34};

    if (number1 < number2)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is not less than" << number2 << std::endl;
    }

    const unsigned int COUNT = 10;
    size_t i{0};

    while (i < COUNT)
    {
        std::cout<< i << " : I Love C++ " << std::endl;
        ++i;
    }

    int *p_number1{new int{55}};
    p_number1 = new int{34};

    delete p_number1;
    p_number1 = nullptr;

    return 0;
}