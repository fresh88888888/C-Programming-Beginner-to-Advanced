#include <iostream>
#include <string_view>

class Dog
{
public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

    void print_info()
    {
        std::cout << "dog(" << this << ") [ name : " << name << " breed : " << breed << " p_age : " << *p_age << " ]" << std::endl;
    }

    // Setting and Getting
    /*
    Dog *set_dog_name(std::string_view name)
    {
        this->name = name;
        return this;
    }
    Dog *set_dog_breed(std::string_view breed)
    {
        this->breed = breed;
        return this;
    }
    Dog *set_dog_age(int age)
    {
        *this->p_age = age;
        return this;
    }
    */

    // return dog of reference
    Dog &set_dog_name(std::string_view name)
    {
        this->name = name;
        return *this;
    }
    Dog &set_dog_breed(std::string_view breed)
    {
        this->breed = breed;
        return *this;
    }
    Dog &set_dog_age(int age)
    {
        *this->p_age = age;
        return *this;
    }

    std::string get_name()
    {
        return this->name;
    }

private:
    std::string name;
    std::string breed;
    int *p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constuctor called for : " << name << " constuctored at : " << this << std::endl;
}

Dog::~Dog()
{
    delete p_age;
    std::cout << "Dog destuctor called for : " << name << " destuctor at : " << this << std::endl;
}

void some_function()
{
    Dog *p_dog = new Dog("david", "zhang", 4);
    delete p_dog; // Causes for the destuctor of Dog to be called
}

int main()
{
    // some_function();

    Dog dog("david1", "zhang", 1);
    dog.print_info();
    // dog.set_dog_name("Jonez")->set_dog_breed("maoma")->set_dog_age(12);
    dog.set_dog_name("Jonez is first name in shchool alias").set_dog_breed("maoma").set_dog_age(12);
    dog.print_info();

    std::cout << "sizeof(std::string) : " << sizeof(std::string) << std::endl;
    std::cout << "sizeof(name) : " << sizeof(dog.get_name()) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int *) << std::endl;
    std::cout << "sizeof(Dog) : " << sizeof(dog) << std::endl;

    return 0;
}