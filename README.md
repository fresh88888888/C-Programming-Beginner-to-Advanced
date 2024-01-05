
### 操作系统
操作系统的加载流程：
计算机BIOS固件是固化在PC机主板上的ROM芯片中，掉电也能保存，计算机加电之后第一条指令就是BIOS固件中的，它负责检测和初始化CPU、内存和主板，然后加载引导设备（大概率是硬盘）中的第一个扇区数据,到0x7c00地址开始的内存空间，再接着跳转到0x7c00处执行指令，也就是引导程序(GRUB),最后由GRUB加载操作系统

写一个操作系统的步骤：
- 第一步：现编一下操作系统引导汇编程序(汇编语言)，用汇编程序初始化 CPU 的寄存器、设置 CPU 的工作模式和栈，最重要的是加入了 GRUB 引导协议头。
- 第二步：编写操作系统程序(C语言)，操作系统主函数
- 第三步：编写一个VGABIOS的固件程序(C语言), 控制显卡输出到屏幕上显示字符
- 第四步：make 工具编译整个代码，其实 make 会根据一些规则调用具体的 nasm、gcc、ld 等编译器，然后形成 Hello OS.bin 文件，你把这个文件写复制到 boot 分区(make:编译makefile文件、nasm:编译汇编语言文件、gcc:编译c语言文件、ld：)。
- 第五步：在GRUB的grub.cfg中添加操作系统的启动配置项
- 最后：GRUB 根据启动项对应的信息，加载 OS 文件到内存，OS成功启动。

#### make使用
Makefile有三个非常有用的变量。分别是$@，$^，$<代表的意义分别是：$@--目标文件，$^--所有的依赖文件，$<--第一个依赖文件。

#### C/C++
- functon template are just blueprints, they 're not real function declaration and definiation.
- real function delcaration and definiations, aka template instances are created when you cal the function with arguments.
- if the template parameters are of the same type (T, T), then the arguments you call the function with must also match, otherwise you get compiler error.
- template instances won't always do what you want, A good example is when you call the our maximum function with pointers. DISASTER.
- there are tools like cppinsights.io that can show you template instantiations, you can even use the debuger to infer that information from the activation record of a template function.
- the arguments passed to a function template mut support the operations hat are done in the body of the function.


#### template capture
- function template are just blueprint , they are not real C++ code consumed by the compiler.  the compiler generates real c++ code by looking at the arguments you call your function template with.
- the real c++ function generated by the compiler is called a template instance.
- a template instance will be reused when a similar function call (argument types) is issued. No duplicates are generated by the ompiler.
- a mechanism to place constraints on your template type parameters.

#### class
- class member variables can either be raw stack variables or pointers.
- members can't be references.
- classes have function(methods) that let them do things.
- class methods have access to the member variables, regardless of weather they are public or private.
- private members of classes (variables and functions) aren't accessiable from the outside of the class definition.

#### class constructor
- a special kind of method that is called hen an instance of a class is created.
    - no return tye
    - same name as the class
    - can have parameter, can also have an empty parameter list.
    - usually used to initialize member variable of a class.

#### when are destructors called
- the destructors are called in weird places  that may not be obvious.
  - when an object is passed by value to a function.
  - when a local object is returned from a function (for some compilers).
- other obvious case are:
  - when a local stack object goes out of scope(dies).
  - when a heap object is released with delete.

#### when are destructor called
- the destructors are called in weird places that may not be obvious
  - when an object is passed by value to a function.
  - when a local onject is returned from function (for some compilers).
- other obvious case are:
  - when a local stack object goes out of scope (dies).
  - when a heap object is released with delete.

#### this pointer
- each class member function contains a hidden pointer called this. that pointer contains the address of the current object, for which the method is being xcuted. this also applies to constructors and destructors.

#### inheritance
- a define feature of object oriented programing in c++.
- building type on top of other types.
- inheritance hierarchies can be set up to suits your needs.
- code reuse is improved.
- with public inheritance,derived classes can access and use public members of the base class, but the derived class can't directly access private members.
- the same also applies to friends of derived class , they have access to members of derived, but don't have access to the base class.
- through the base class access specifier , we can control how relaxed or constrained s the access of base class members from the derived class.
- Regardless of the access specifier , private members of base class are never accessible from derived classes.
- always provide a default constructor for you classes , especially if they wiil be part of an inheritance hierarchy.

#### inherting the constructor
- copy constructors are not inherited , but you won't usually notices this as the compiler will insert an automatic copy constructor.
- herited constructor are base constructors , they have no knowledge of the derived class , any member from the derived class will just contain junk or whatever default value it's initialize with.
- constructor are inherited with whatever access specifier they had in base class.
- on top of derived constructors, you can add your own that possibly property initialize derived member variables.
- inheriting constructors adds a level of confusion to you code, it's not clear which constructor s building you object. it is recommended to avoid them and only use this feature if no other option is available.

#### polymorphism
- managing derived objects in memory though base pointers or references and getting the right method called on the base point and refernece.
- the compiler just looks at the pointer type to decide with draw() version to call.  it see Shape* and calls Shape:draw().  This is static binding in action!

#### override
- restrict how you override methods in derived class.
- estrict how you can derive from a base class.

#### vitural function of default parameter
- default arguments are handled at compile time.
- virtual functions are called at run time with polymorphism. 
- if you use default arguments with virtual functions, you might get weird(erroneous) results with polymorphism.

- transforming from base class pointer or reference to derived class pointer or reference , at run time.
- makes it possible to can non polymorphic methods on derived objects.


#### 最好的c plus plus youtube 频道：

- C++ Weekly With Jason Turner
- The Cherno
- CppCon (Data-Oriented Design and C++)
- Casey Muratori, MollyRocket
- Humble Bundle: https://www.humblebundle.com
- Learn OpenGL: https://learnopengl.com/
- Automate the Boring Stuff - Free to read! I didn’t know this at the time of recording: https://automatetheboringstuff.com/