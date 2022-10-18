1)
#include <iostream>
using namespace std;
#include <cstring>

class Student{
    public :
    char *name;
    int rollNo;

    // Constructor 1
    Student(int num){
        rollNo = num;
        name = new char[10];
        strcpy(name, "abc");
    }

    // Constructor 2
    Student(int num, char *str){
        rollNo = num;
        name = new char[strlen(str) + 1];
        strcpy(name, str);
    }

    void print(){
        cout << name << " "  <<  rollNo << " ";
    }
};

int main() {
    Student s1(101);
    s1.print();
    char str[] ="xyz";
    Student *s2 = new Student(150, str);
    s2 -> print();
}

What is the output?
a) Error
b) GarbageValue 101 xyz 150
c) abc 101 xyz 150
d) None

Answer- c

2) 
#include <iostream>
using namespace std;

class Student{
    public :
        char *name;
        int rollNo;

        void print(){
            cout << name << " "  <<  rollNo << " ";
        }
};

int main() {
    char name[] = "Misha";
    Student s1;
    s1.name = name;
    s1.rollNo = 101;

    name[0] = 'N';
    Student s2;
    s2.name = name;
    s2.rollNo = 102;

    s1.print();
    s2.print();
}

What is the output?
a) Misha 101 Nisha 102
b) Nisha 101 Nisha 102
c) Misha 101 Misha 102
d) Nisha 101 Misha 102
  
Answer- b
