#include <iostream>
#include "parent.h"
#include "child.h"

int main()
{
    Parent p1(12);
    p1.print_var();

    std::cout << "--------------" << std::endl;
    Child c1(23);
    c1.print_var();
    c1.Parent::print_var();
    c1.show_values();

    return 0;
}