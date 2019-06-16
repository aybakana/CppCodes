/*
We have to write the same function for each derived class without virtual. 
In the first function, Cat::getName and Cat::speak are called.
In the second function, Dog::getName and Dog::speak are called.
In the third function, Animal::getName and Animal::speak are called for non-virtual functions.
With virtual functions, we dont have to write same function for each of derived class.
*/

#include <iostream>

void report(const Cat &cat)
{
    std::cout << cat.getName() << " says " << cat.speak() << '\n';
}
 
void report(const Dog &dog)
{
    std::cout << dog.getName() << " says " << dog.speak() << '\n';
}

void report(const Animal &rAnimal)
{
    std::cout << rAnimal.getName() << " says " << rAnimal.speak() << '\n';
}