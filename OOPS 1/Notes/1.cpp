#include <iostream>
using namespace std;

class Student 
{
	public :
	int rollNumber;
	
	private :
	int age;		// will show error for age because it has been declared in private and is tried to accessed in the main function
};

int main() 
{
	// Create objects statically
	Student s1;
	Student s2;
	Student s3, s4, s5;

 	// adding values, remember we must always initialise the objects of the class with some value
	s1.age = 24;
	s1.rollNumber = 101;

	cout << s1.age << endl;
	cout << s1.rollNumber << endl;

	s2.age = 30;

	// Create objects dynamicaaly
	Student *s6 = new Student;
	(*s6).age = 23;
	(*s6).rollNumber = 104;

	s6 -> age = 23;
	s6 -> rollNumber = 104;
}
