1) Which of the following statements are not true about destructor?
1. It is invoked when object goes out of the scope
2. Like constructor, it can also have parameters 
3. It can be declared in private section
4. It bears same name as that of the class and is preceded by tilde sign. 
	
Answer- Only 2
	
2) Assume class DEMO. Which of the following statement(s) responsible to invoke copy constructor?
1. DEMO D2(D1); //  Here D1 is an already created object of class  DEMO
2. D2 = D1; // Here D1, D2 are already created objects of class DEMO

Answer- Only 1

3) // Copy Constructor 
Consider following piece of code:
class Pair{
  public :
  int first;
  int second;
};

int main(){

  Pair *p1 = new Pair;
  Pair p2;
}
Which of the following statement is feasible ?
1. p2 = p1;
2. p2 = *p1;
3. Both 1 and 2 are correct.
4. None of the above

Answer- 2		// p1 is dynamic and p2 is static, to copy values 2 is the only feasible way
	
4) Consider following piece of code:
#include<iostream>
using namespace std;

class Pair{
      public :
      int first;
      int second;
};

int main(){

      Pair p1;
      p1.first = 10;
      p1.second = 20;
      Pair p2;
      p2 = p1;
      cout << p2.first << " " << p2.second << endl;
}
What will be the output ?
1. 10 20
2. Error
3. Garbage_value Garbage_value

Answer- 1
