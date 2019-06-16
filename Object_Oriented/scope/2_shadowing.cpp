/*
OUTPUT:
10
10
*/

#include <iostream>
 
int main()
{ // outer block
    int apples(5); // here's the outer block apples
 
    if (apples >= 5) // refers to outer block apples
    { // nested block
        // no inner block apples defined
 
        apples = 10; // this now applies to outer block apples, even though we're in an inner block
 
        std::cout << apples << '\n'; // print value of outer block apples
    } // outer block apples retains its value even after we leave the nested block
 
    std::cout << apples << '\n'; // prints value of outer block apples
 
    return 0;
} // outer block apples destroyed