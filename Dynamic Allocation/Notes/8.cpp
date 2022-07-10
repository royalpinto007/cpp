#include <iostream>
using namespace std;

/*
#define PI 3.14

int main()
{
    int r;
    cin >> r;
    cout << PI * r * r << endl;
}
*/

int a;                      // Global Variable

void g() {
	a++;
	cout << a << endl;
}

void f() {
	cout << a << endl;
	a++;
	g();
}

int main() {
	a = 10;
	f();
	f();
	cout << a << endl;
}

// Output-
//   10
//   12
//   12
//   14
//   14
