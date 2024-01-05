#include <iostream>
#include <type_traits>
#include <concepts>

int sum(int a, int b)
{
    int result = a + b;
    std::cout << "In &result(int): " << &result << std::endl;
    return result;
}

std::string add_strings(std::string str1, std::string str2)
{
    std::string result = str1 + str2;
    std::cout << "In &result(std::string) : " << &result << std::endl;

    return result;
}

template <typename T>
concept my_traversal = requires(T a, T b) {
    a *b; // Just make sure the syntax is valid.
};

template <typename T>
concept incrementable = requires(T a) {
    a += 1;
    ++a;
    a++;
};

template <typename T>
    requires incrementable<T>
T add(T a, T b)
{
    return a + b;
}

template <typename T>
concept TinyType = requires(T t) {
    sizeof(T) < 4;
};

TinyType auto add(TinyType auto a, TinyType auto b)
{
    return a + b;
}

int main()
{
    int a{23};
    int b{34};

    int result = sum(a, b);
    std::cout << "Out : &result(int) : " << &result << std::endl;
    std::cout << "sum: " << result << std::endl;

    std::string str_result = add_strings(std::string("Hello"), std::string(" World!"));
    std::cout << "Out : &result(std::string) : " << &str_result << std::endl;
    std::cout << "str_result: " << str_result << std::endl;

    double c_0{11.1};
    double c_1{1.9};
    auto result_c = add(c_0, c_1);
    std::cout << " result_c : " << result_c << std::endl;

    /*
    std::string x{"Hello "};
    std::string y{" World"};
    std::cout << "add(std::string, std::string) : " << add(x, y) << std::endl;
    */
    char e{67};
    char f{56};

    auto result_ch = add(e, f);
    std::cout << "result: " << result_ch << std::endl;
    

    return 0;
}