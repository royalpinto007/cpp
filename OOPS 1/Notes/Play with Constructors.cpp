#include <iostream>
using namespace std;

int main(){

  Student s1;         // Constructor 1 called
  
  Student s2(101);    // Constructor 2 called
  
  Student s3(10, 1);  // Constructor 3 called
  
  Student s4(s3);     // Copy Constructor
  
  s1 = s2;            // Copy Assignment Operator
  
  Student s5 = s4;    // works like- Student s5(s4);
}
