#include <iostream>

using namespace std;

class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Member functions declaration
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};

// Member functions definitions
double Box::getVolume(void) {
   return length * breadth * height;
}

void Box::setLength( double len ) {
   length = len;
}
void Box::setBreadth( double bre ) {
   breadth = bre;
}
void Box::setHeight( double hei ) {
   height = hei;
}

int main(){
	Box box1;
	Box box2;
	double volume = 0.0;

	box1.height = 5.0;
	box1.length = 6.0;
	box1.breath = 7.0;

	box2.height = 10.0;
	box2.length = 12.0;
	box2.breath = 13.0;

	volume = box1.height * box1.length * box1.breath;
	cout << "Volume of box1: "<<volume<<endl;

	volume = box2.height * box2.length * box2.breath;
	cout << "Volume of box2: "<<volume<<endl;
	return 0; 
}
