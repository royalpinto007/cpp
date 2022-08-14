// Input and output is sometimes a bottleneck in the program. The following lines at the beginning of the code make input and output more efficient:
// ios::sync_with_stdio(0);
// cin.tie(0);

// Note that the newline "\n" works faster than endl, because endl always causes a flush operation.
// The C functions scanf and printf are an alternative to the C++ standard streams. They are usually a bit faster, but they are also more difficult to use. 
// The following code reads two integers from the input:
// int a, b;
// scanf("%d %d", &a, &b);

// If the amount of data is unknown, the following loop is useful:
// while (cin >> x) 
// {
//   // code
// }

// In some contest systems, files are used for input and output. An easy solution for this is to write the code as usual using standard streams, but add the following lines to the beginning of the code:
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// After this, the program reads the input from the file ”input.txt” and writes the output to the file ”output.txt”.

// If the type int is not enough, the 64-bit type long long can be used. 

// The following code defines a long long variable:
// long long x = 123456789123456789LL;

// The suffix LL means that the type of the number is long long.
// A common mistake when using the type long long is that the type int is still used somewhere in the code. 
// For example, the following code contains a subtle error:
// int a = 123456789;
// long long b = a*a;
// cout << b << "\n"; // -1757895751

// Even though the variable b is of type long long, both numbers in the expression a*a are of type int and the result is also of type int. 
// Because of this, the variable b will contain a wrong result. 
// The problem can be solved by changing the type of a to long long or by changing the expression to (long long)a*a.

// An important property of the remainder is that in addition, subtraction and multiplication, the remainder can be taken before the operation:
// (a+b) mod m = (a mod m+b mod m) mod m
// (a-b) mod m = (a mod m-b mod m) mod m
// (a.b) mod m = (a mod m.b mod m) mod m
// Thus, we can take the remainder after every operation and the numbers will never become too large.

// floating point numbers
// The usual floating point types in competitive programming are the 64-bit double and, as an extension in the g++ compiler, the 80-bit long double. 
// In most cases, double is enough, but long double is more accurate.

// Using the command typedef it is possible to give a shorter name to a datatype.
// For example, the name long long is long, so we can define a shorter name ll:
// typedef long long ll;

// After this, the code
// long long a = 123456789;
// long long b = 987654321;
// cout << a*b << "\n";

// can be shortened as follows:
// ll a = 123456789;
// ll b = 987654321;
// cout << a*b << "\n";

// The command typedef can also be used with more complex types. 
// For example, the following code gives the name vi for a vector of integers and the name pi for a pair that contains two integers.
// typedef vector<int> vi;
// typedef pair<int,int> pi;

// macros
// Another way to shorten code is to define macros. A macro means that certain strings in the code will be changed before the compilation. 
// In C++, macros are defined using the #define keyword.
// For example, we can define the following macros:
// #define F first
// #define S second
// #define PB push_back
// #define MP make_pair
// After this, the code
// v.push_back(make_pair(y1,x1));
// v.push_back(make_pair(y2,x2));
// int d = v[i].first+v[i].second;

// can be shortened as follows:
// v.PB(MP(y1,x1));
// v.PB(MP(y2,x2));
// int d = v[i].F+v[i].S;

// A macro can also have parameters which makes it possible to shorten loops and other structures. 
  
// For example, we can define the following macro:
// #define REP(i,a,b) for (int i = a; i <= b; i++)

// After this, the code
// for (int i = 1; i <= n; i++) 
// {
//   search(i);
// }

// can be shortened as follows:
// REP(i,1,n) {
// search(i);
// }
// Sometimes macros cause bugs that may be difficult to detect. For example,
// consider the following macro that calculates the square of a number:
// #define SQ(a) a*a
// This macro does not always work as expected. For example, the code
// cout << SQ(3+3) << "\n";

// corresponds to the code
// cout << 3+3*3+3 << "\n"; // 15
// A better version of the macro is as follows:
// #define SQ(a) (a)*(a)
// Now the code
// cout << SQ(3+3) << "\n";
// corresponds to the code
// cout << (3+3)*(3+3) << "\n"; // 36

