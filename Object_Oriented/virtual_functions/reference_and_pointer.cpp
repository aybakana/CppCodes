// TODO: Study on this topic and make practices
#include <iostream>
 
int main()
{
    Cat cat(5);
 
    // These are both legal!
    Animal &rAnimal = cat;
    Animal *pAnimal = &cat;
 
    std::cout << "derived is a " << cat.getName() << " and has value " << cat.getValue() << '\n';
    std::cout << "rBase is a " << rAnimal.getName() << " and has value " << rAnimal.getValue() << '\n';
    std::cout << "pBase is a " << pAnimal->getName() << " and has value " << pAnimal->getValue() << '\n';
 
    return 0;
}