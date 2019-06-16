/*
OUTPUT:
C
Explanation: This is pretty straightforward, as C::getName() is the most derived matching call between classes B and C.
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
    B &rBase = c; // note: rBase is a B this time
    std::cout << rBase.getName() << '\n';
	/*  
	OR
    C c;
   	B *rBase = &c;
   	std::cout << rBase->getName() << '\n';
	*/ 
    return 0;
}