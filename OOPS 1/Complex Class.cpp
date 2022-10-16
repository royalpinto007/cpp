/**********
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
************/

class ComplexNumbers {
    // Complete this class
    private :
    int real;
    int imaginary;
    
    public :
    // constructor;
    ComplexNumbers(int real, int imaginary) {
        this -> real = real;
        this -> imaginary = imaginary;
    }
    
    // print function
    void print() {
        cout << real << " + i" << imaginary << endl; 
    }
    
    void plus(ComplexNumbers const &c2) {
        real += c2.real;
        imaginary += c2.imaginary;
    }
    
    void multiply(ComplexNumbers const &c2) {
        int a = ((real * c2.real) - (imaginary * c2.imaginary));
        int b =  ((imaginary * c2.real) + (real * c2.imaginary));
        real = a;
        imaginary = b;
    }
};

/*
#include <iostream>
using namespace std;
#include "ComplexNumbers.h"

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}
*/
