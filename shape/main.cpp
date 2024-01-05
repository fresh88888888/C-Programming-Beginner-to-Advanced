#include <iostream>
#include "shape.h"
#include "oval.h"
#include "cicle.h"

int main()
{
    Shape shape("shape");
    shape.draw();

    Oval oval(2.0, 3.5, "Oval");
    oval.draw();

    Cicle cicle(3.3, "Cicle");
    cicle.draw();

    // Base pointers
    Shape *shape_ptr = &shape;
    shape_ptr->draw();

    shape_ptr = &oval;
    shape_ptr->draw();

    shape_ptr = &cicle;
    shape_ptr->draw();

    // Base references
    Shape &shape_ref1 = shape;
    shape_ref1.draw();

    Shape &shape_ref2 = oval;
    shape_ref2.draw();

    Shape &shape_ref3 = cicle;
    shape_ref3.draw();

    std::cout << "----------------" << std::endl;
    /*
    std::cout << "sizeof(Shape) : " << sizeof(Shape) << std::endl;
    std::cout << "sizeof(Oval) : " << sizeof(Oval) << std::endl;
    std::cout << "sizeof(Cicle) : " << sizeof(Cicle) << std::endl;
    */

    Cicle cicle1(2.3, "cicle1");
    Oval oval1(2.1, 3.6, "oval1");

    Cicle cicle2(2.4, "cicle2");
    Oval oval2(2.2, 3.7, "oval2");

    Cicle cicle3(2.4, "cicle3");
    Oval oval3(2.2, 3.7, "oval3");

    Shape shape1[]{cicle1, oval1, cicle2, oval2, cicle3, oval3};
    for (Shape &s : shape1)
    {
        s.draw();
    }

    Shape *shape3[]{&cicle1, &oval1, &cicle2, &oval2, &cicle3, &oval3};
    for (Shape *shape_ptrs : shape3)
    {
        std::cout << "inside array , sizeof(*shape_ptrs) : " << sizeof(*shape_ptrs) << std::endl;
        shape_ptrs->draw();
        std::cout << std::endl;
    }

    // Smart pointers
    std::shared_ptr<Shape> shape4[]{std::make_shared<Cicle>(2.6, "cicle4"), std::make_shared<Oval>(2.3, 4.5, "oval4")};
    for (auto &s : shape4)
    {
        s->draw();
    }

    // override
    Cicle cicle_r(7.2, "cicle_r");
    cicle_r.draw();
    cicle_r.draw(44.2);

    std::cout << "----------------" << std::endl;

    /*Shape shape10("shape10");
    std::cout << "shape count : " << Shape::m_count << std::endl;

    Shape shape11("shape11");
    std::cout << "shape count : " << Shape::m_count << std::endl;

    Shape shape12;
    std::cout << "shape count : " << Shape::m_count << std::endl;

    Oval oval10(2.1, 3.6, "oval10");
    std::cout << "shape count : " << Shape::m_count << std::endl;
    std::cout << "oval count : " << Oval::m_count << std::endl;
    */
   
    return 0;
}