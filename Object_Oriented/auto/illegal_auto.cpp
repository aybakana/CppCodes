/*
This won’t work, because the compiler can’t infer types for function parameters x and y at compile time.

Note: If you’re looking to create functions that work with a variety of different types, you should be using function templates, not type inference
*/

#include <iostream>
 
void addAndPrint(auto x, auto y)
{
    std::cout << x + y;
}