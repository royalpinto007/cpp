1)
class Student {
    public :

    const int rollNumber;
    int age;
};


int main() {
    Student s1;
    s1.rollNumber = 101;
    s1.age = 20;

    cout << s1.rollNumber << " " << s1.age;
}

What will be the output?
a) 101 20
b) Garbage
c) Compilation Error
d) None

Answer- c // because rollNumber is a constant and cannot be changed later

2)
class Student {
    public :

    const int rollNumber;
    int age;

    Student(int r, int a) : rollNumber(r), age(a) {
    }
};


int main() {
    Student s1(100, 23);
    cout << s1.rollNumber << " " << s1.age;
}

What will be the output?
a) Error
b) 100 Garbage
c) 100 23
d) Garbage Garbage

Answer- c // initialisation list has been used, so no issues happen

3)
class Student {
    public :

    const int rollNumber;
    int age;

    int &x;

    Student(int r, int a) : rollNumber(r), age(a) {
    }
};


int main() {
    Student s1(100, 23);
    s1.x = age;
    cout << s1.rollNumber << " " << s1.age << " " << s1.x;
}

What will be the output?
a) 100 23 23
b) 100 23 Garbage
c) Error
d) None

Answer- c // because int &x must be used in the initialisation list using x(this -> age)
