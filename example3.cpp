#include <iostream>

int main()
{
    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal
    int number3 = 0x0F;       // HexDecimal
    int number4 = 0b00001111; // Binary

    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number2: " << number2 << std::endl;
    std::cout << "number3: " << number3 << std::endl;
    std::cout << "number4: " << number4 << std::endl;

    // Braced Initializers
    // Varibale a contain random garbage value . WARNING
    int elephant_count; 
    int lion_count{};   // Initializes to zero
    int dog_count{5};   // Initializes to 5
    int cat_count{10};  // Initializes to 10

    // Can use expression as Initializes
    int domesticated_naimals{dog_count + cat_count};

    std::cout << "elephant count: " << elephant_count << std::endl;
    std::cout << "lion count: " << lion_count << std::endl;
    std::cout << "dog count: " << dog_count << std::endl;
    std::cout << "cat count: " << cat_count << std::endl;
    std::cout << "domesticated naimals count: " << domesticated_naimals << std::endl;

    // Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    int naarowing_conversion_functional(2.9);

    std::cout << "apple count: " << apple_count << std::endl;
    std::cout << "orange count: " << orange_count << std::endl;
    std::cout << "fruit count: " << fruit_count << std::endl;
    std::cout << "naarowing_conversion: " << naarowing_conversion_functional << std::endl;

    // Check the size with sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof apple count: " << sizeof(apple_count) << std::endl;

    return 0;
}