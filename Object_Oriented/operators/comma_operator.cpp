/*

The comma operator allows you to evaluate multiple expressions wherever a single expression is allowed. 
The comma operator evaluates to its rightmost operand.

*/


int x = 0;
int y = 2;
int z = (++x, ++y); // increment x and y, and z = y+1(3)


// OR

int x = 0;
int y = 2;
++x;
++y;
int z = y;


z = (a, b); // evaluate (a, b) first to get result of b, then assign that value to variable z.
z = a, b; // evaluates as "(z = a), b", so z gets assigned the value of a, and b is discarded.
