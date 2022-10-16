class Student {

	public :
	int rollNumber;
	
	private :
	int age;

	public :
	// Default constructor
	Student() {
		cout << "Constructor called ! "<< endl;
	}
	// Default constructor is deleted when we create our own constructor (but works in the similar manner)

	// Parameterized constructor
	Student(int rollNumber) {
		cout << "Constructor 2 called !" << endl;
	
		this -> rollNumber = rollNumber;
	}

	Student(int a, int r) {
		cout << "this : " << this << endl;
		cout << "Constructor 3 called ! " << endl;
		this -> age = a;
		this -> rollNumber = r;
	}

	void display() {
		cout << age << " " << rollNumber << endl;
	}

	int getAge() {
		return age;
	}

	void setAge(int a, int password) 
	{
		if(password != 123) 
		{
			return;
		}
		if(a < 0) 
		{
			return;
		}
		age = a;
	}
};

#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	Student s1(10, 1001);
	cout << "Address of s1 : " << &s1 << endl;

	Student s2(20);
	s2.display();

	/*
	Student s1;
	s1.display();

	Student s2;
	Student *s3 = new Student;
	s3 -> display();

	cout << "Parametrized constructors Demo" << endl;
	Student s4(10);

	s4.display();

	Student *s5 = new Student(101);
	s5 -> display();

	Student s6(20, 1002);
	s6.display()
	*/
}

