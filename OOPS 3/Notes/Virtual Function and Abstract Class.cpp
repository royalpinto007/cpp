class Car : public Vehicle {
	public :
		int numGears;
		
		void print() {
			cout << "Car" << endl;
		}
};

class Vehicle {
	public :
		string color;

		// Pure virtual fn
	virtual void print() = 0;
};

#include <iostream>
using namespace std;

int test(int a, int b) {

}

int test(int a) {

}

int test() {

}

int main() {

}

#include <iostream>
using namespace std;
#include "Vehicle.cpp"
#include "Car.cpp"

int main() {
  
	Vehicle v;
	Car c;

	/*
	Car c;

	v.print();
	c.print();
  
	Vehicle *v1 = new Vehicle;

	Vehicle *v2;
	// v2 = &v;

	v2 = &c;

	v1 -> print();

	v2 -> print();
	*/
}
