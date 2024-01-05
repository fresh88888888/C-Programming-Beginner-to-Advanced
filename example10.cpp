#include <iostream>
#include <concepts>

// Definition
/*
template <typename T>
    requires std::integral<T>
T add(T a, T b)
{
    return a + b;
}
*/

/*
auto add(std::integral auto a, std::integral auto b)
{
    return a + b;
}
*/

// template <typename T>
// concept MyIntegral = requires(T a, T b) {
//     a *b; // Just make sure the syntax is valid.
// };

// MyIntegral auto add(MyIntegral auto a, MyIntegral auto b)
// {
//     return a + b;
// }

/*template <typename T>
concept TinyType = requires(T a) {
    sizeof(T) < 4; // Simple requirement : Only enforces syntax.
};

// Compound requirement
template <typename T>
concept Addable = requires(T a, T b) {
    // noexcept is optional
    {
        a + b
    } noexcept -> std::convertible_to<int>;
};

Addable auto
add(Addable auto a, Addable auto b)
{
    return a + b;
}
*/

// template <typename T>
// concept TinyType = requires(T t) {
//     sizeof(T) <= 4;          // Simple  requirement
//     requires sizeof(T) <= 4; // Nested requirement
// };

// template <typename T>
//  requires std::integral<T> || std::floating_point<T>
//  requires std::integral<T> && TinyType<T>
//     requires std::integral<T> && requires(T t) {
//         sizeof(T) <= 4;          // Simple  requirement
//         requires sizeof(T) <= 4; // Nested requirement
//     }
// T add(T a, T b)
// {
//     return a + b;
// }

// This syntax constrains the auto parameters you pass in to comply with the std::integral<T> concept
std::integral auto add(std::integral auto a, std::integral auto b)
{
    return a + b;
}

int main()
{
    char a{10};
    char b{20};

    auto result_1 = add(a, b);
    std::cout << "result_1 : " << static_cast<int>(result_1) << std::endl;

    int c{11};
    int d{5};

    auto result_2 = add(c, d);
    std::cout << "result_2 : " << result_2 << std::endl;

    double e{11.1};
    double f{9.2};
    // auto result_3 = add(e, f);
    // std::cout << "result_3 : " << result_3 << std::endl;

    char x{56};
    char y{67};
    auto result_4 = add(x, y);
    std::cout << "result_4 : " << result_4 << std::endl;
}