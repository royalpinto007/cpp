// Student.cpp
class Student 
{
	public :
	int rollNumber;
	
	private :
	int age;

	public :
	void display() 
	{
		cout << age << " " << rollNumber << endl;
	}

	int getAge() 
	{
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

// StudentUse.cpp
#include <iostream>
using namespace std;
#include "Student.cpp"

int main() 
{
	// Create objects statically
	Student s1;
	Student s2;

	Student s3, s4, s5;

	//s1.age = 24;
	s1.rollNumber = 101;

	cout << "S1 age : " << s1.getAge() << endl;
	cout << "S1 Roll number : " << s1.rollNumber << endl;

	s1.display();
	s2.display();

	//s2.age = 30;

	// Create objects dynamicaaly
	Student *s6 = new Student;
	//(*s6).age = 23;
	(*s6).rollNumber = 104;

	(*s6).display();

	cout << "S6 age : " << s6 -> getAge() << endl;

	//s6 -> age = 23;
	s6 -> rollNumber = 104;
	s6 -> display();
}

// StudentNew.cpp
#include <iostream>
using namespace std;
#include "Student.cpp"

int main() 
{
	Student s1;
	Student *s2 = new Student;

	s1.setAge(20);
	s2 -> setAge(24);

	s1.display();
	s2 -> display();
}
