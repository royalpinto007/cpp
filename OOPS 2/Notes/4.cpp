1)
class Student {
    public :

    int rollNumber;
    static int totalStudents;
};

int Student::totalStudents = 20;

int main() {
    Student s;
    // Correct statement to access totalStudents
}

a) totalStudents
b) s.totalStudents
c) Student.totalStudents
d) Student :: totalStudents

Answer- d)
  
2)
class Student {
    public :

    int rollNumber;

    static int getRollNumber() {
        return rollNumber;
    }
};


int main() {
    Student s;
    s.rollNumber = 101;
    cout << s.getRollNumber() << endl;
}

a) 101
b) 0
c) Compilation Error
d) Error

Answer- d // since static members can be accessed/initialised through :: only

3)
class Student {
    public :

    int rollNumber;
    static int totalStudents;

    Student() {
        totalStudents++;
    }
};

int Student::totalStudents = 20;

int main() {
    Student s1, s2, s3, s4;
    cout << Student :: totalStudents;
}

Answer- 24
