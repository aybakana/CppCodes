/*

Conditional	?:	c ? x : y	If c is nonzero (true) then evaluate x, otherwise evaluate y

*/
#include <iostream>

if (x > y)
    larger = x;
else
    larger = y;

// OR 
	
larger = (x > y) ? x : y;

if (x > y)
    std::cout << x;
else
    std::cout << y;

// OR

std::cout << ((x > y) ? x : y);

// ERROR

int main()
{
	int x = 5;
	std::cout << (x != 5 ? x : "x is 5"); // won't compile
 
	return 0; // semicolon
}

// The above example won’t compile. 
// One of the expressions is an integer, and the other is a string literal. 
// The compiler will try to find a way to convert the string literal to an integer, 
// but since it doesn’t know how, it will give an error. In such cases, you’ll have to use an if/else.