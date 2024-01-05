#include <iostream>

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x{5};
    int y{6};

    auto result = maximum(x, y);
    std::cout << "result : " << result << std::endl;

    auto func1 = [](double a, double b)
    {
        return a + b;
    };

    auto result1 = func1(10.0, 20.3);
    auto result2 = func1(13.0, 23.4);

    std::cout << "result1: " << result1 << " result2: " << result2 << std::endl;

    auto func2 = [](double a, double b) -> int
    {
        return a + b;
    };

    auto func3 = [](double a, double b)
    {
        return a + b;
    };

    double a{23.5};
    double b{34.8};

    auto result3 = func2(a, b);
    auto result4 = func3(a, b);

    std::cout << "result3 : " << result3 << "  result4 : " << result4 << std::endl;
    std::cout << "sizeof(result3) : " << sizeof(result3) << "  sizeof(result4) : " << sizeof(result4) << std::endl;

    // Capturing by value : what we have in the lambda function is a copy
    int c{42};

    // c variable of value for copy
    auto func4 = [=]()
    {
        std::cout << "Inner value: " << c << " &Inner value : " << &c << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value: " << c << " &Outer value : " << &c << std::endl;
        func4();
        ++c;
    }

    std::cout << "------------------------" << std::endl;
    int d{42};
    int e{56};
    // Capturing all reference
    auto func5 = [&]()
    {
        std::cout << "Inner value(d) : " << d << " &Inner value(d) : " << &d << std::endl;
        std::cout << "Inner value(e) : " << e << " &Inner value(e) : " << &e << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value(d) : " << d << " &Outer value(d) : " << &d << std::endl;
        std::cout << "Outer value(e) : " << e << " &Outer value(e) : " << &e << std::endl;
        func5();
        ++d;
    }

    return 0;
}