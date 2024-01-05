#include <iostream>

int main()
{
    size_t size{10};

    // Different ways you can declare an array. Dynamically and how they are initialized
    double *p_salaries{new double[size]};
    // All values initialzed to 0.
    int *p_students{new (std::nothrow) int[size]{}};
    // Allocating memory space for an array of size  double vars. first will be initialized with 1,2,3,4,5, And the rest will be 0's
    double *p_scores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};

    // nullprt check and use the allocated array
    if (p_scores)
    {
        std::cout << " Size of scores (it's regular pointer) : " << sizeof(p_scores) << std::endl;
        std::cout << " Successfully allocated memory for scores." << std::endl;
    }

    // Print out elements , Can use regular array access notation, or pointer arithmetic
    for (size_t i{}; i < size; ++i)
    {
        std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
    }

    delete[] p_salaries;
    p_salaries = nullptr;
    delete[] p_students;
    p_students = nullptr;
    delete[] p_scores;
    p_scores = nullptr;

    return 0;
}