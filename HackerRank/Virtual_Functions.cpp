#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <string>

class Person{
public:
    string name;
    int age;
    int id;
    virtual void getdata(){}
    virtual void putdata(){}
};

class Student : public Person {
public:
    int marks[6];
    int sum_marks=0;
    static int cur_id;
    Student() { id = ++cur_id; }
    void getdata() {
        cin >> name;
        cin >> age;
        for (int i = 0; i < 6; i++) {
          cin >> marks[i];
          sum_marks += marks[i];
      }
    }

    void putdata(){
        cout << name << " " << age << " " << sum_marks<< " "<<id<<endl; 
    }   
};
class Professor:public Person{
public:
  int publications;
  static int cur_id;
  Professor() { id = ++cur_id; }
  void getdata() {
    
    cin >> name;
    cin >> age;
    cin >> publications;
    
      //  get the input from the user: the name, age and publications 
  }
  void putdata(){
    //print the name, age, publications and the cur_id of the professor.
    cout<<name<<" "<<age<<" "<<publications<<" "<<id<<endl;
  }
};
int Professor::cur_id = 0;
int Student::cur_id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
