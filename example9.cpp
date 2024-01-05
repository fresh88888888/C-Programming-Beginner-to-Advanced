#include <iostream>
#include <cstring>

template <typename T> // Declaration
T add(T a, T b);

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T> // Declaration
T maximum(T a, T b);

// Definition
template <typename T>
T maximum(T a, T b)
{
    return a < b ? b : a;
}

template <> // Declaration
const char *maximum<const char *>(const char *a, const char *b);

// Definition
template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (std::strcmp(a, b) < 0) ? b : a;
}

int main()
{
    int a{21};
    int b{23};

    double c{23.4};
    double d{9.12};

    std::string e{"hello "};
    std::string f{" world"};

    std::cout << "add(int, int) : " << add(a, b) << std::endl;       // int version created.
    std::cout << "add(double, double) : " << add(c, d) << std::endl; // double version created.
    std::cout << "add(string, string) : " << add(e, f) << std::endl; // std::string version created.

    std::cout << "add(int, double) : " << add<double>(a, c) << std::endl; // int & double version created

    std::cout << "---------------------" << std::endl;
    std::cout << "maximum(int, int) : " << maximum(a, b) << std::endl;
    std::cout << "maximum(double, double) : " << maximum(c, d) << std::endl;
    std::cout << "maximum(string, string) : " << maximum(e, f) << std::endl;

    const char *g{"good"};
    const char *h{"bye!"};
    std::cout << "maximum(const char*, const char*) : " << maximum(g, h) << std::endl;

    return 0;
}