1) If a member function does not alter any data in the class, that may be declared as ....................

a) constant member function
b) private member function
c) static member function
d) None

Answer- a)
  
2)
class Student {
    public :

    int rollNumber;
    int age;

};

int main() {
    Student s1;

    Student const s2 = s1;

    s1.rollNumber = 101;
    s1.age = 20;

    cout << s2.rollNumber << " " << s2.age;
}

What is the output?
a) 101 20
b) Error
c) Garbage Garbage
d) None

Answer- c)
  
3)
class Student {
    int rollNumber;

    public :

    int age;

    Student(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

};

int main() {
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();
}

What is the output?
a) 101
b) 0
c) Garbage
d) Error

Answer- Error
