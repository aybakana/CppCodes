/*
OUTPUT:
B. rBase is an A reference pointing to a C object. 
Normally rBase.getName() would call A::getName(), 
but A::getName() is virtual so it instead calls the most derived matching function between A and C. 
That is B::getName(), which prints B.
*/

class A
{
public:
    virtual const char* getName() { return "A"; }
};
 
class B: public A
{
public:
    virtual const char* getName() { return "B"; }
};
 
class C: public B
{
public:
// Note: no getName() function here
};
 
class D: public C
{
public:
    virtual const char* getName() { return "D"; }
};
 
int main()
{
    C c;
    A &rBase = c;
    std::cout << rBase.getName() << '\n';
 
    return 0;
}