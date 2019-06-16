/*
OUTPUT:
A 
Explanation: Since A is not virtual, when rBase.getName() is called, A::getName() is called.
*/
class A
{
public:
    const char* getName() { return "A"; } // note: not virtual
};
 
class B: public A
{
public:
    virtual const char* getName() { return "B"; }
};
 
class C: public B
{
public:
    virtual const char* getName() { return "C"; }
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