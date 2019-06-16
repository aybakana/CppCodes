/*
OUTPUT: 
C 
Explanation: Even though B and C aren’t marked as virtual functions, 
A::getName() is virtual and B::getName() and C::getName() are overrides. 
Therefore, B::getName() and C::getName() are considered implicitly virtual, 
and thus the call to rBase.getName() resolves to C::getName(), not B::getName().
*/
class A
{
public:
    virtual const char* getName() { return "A"; }
};
 
class B: public A
{
public:
    const char* getName() { return "B"; }  // note: not virtual
};
 
class C: public B
{
public:
    const char* getName() { return "C"; } // note: not virtual
};
 
class D: public C
{
public:
    const char* getName() { return "D"; } // note: not virtual
};
 
int main()
{
    C c;
    B &rBase = c; // note: rBase is a B this time
    std::cout << rBase.getName() << '\n';
 
    return 0;
}