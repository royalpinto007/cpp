1) The recurrence relation capturing the optimal execution time of the Towers of Hanoi problem with n discs is :

T(n) = 2T(n − 2) + 2
T(n) = 2T(n − 1) + n
T(n) = 2T(n/2) + 1
T(n) = 2T(n − 1) + 1 

Answer- d

2) Which of the following operations is not O(1) for an array of sorted data. You may assume that array elements are distinct.

Find the ith largest element
Delete an element 
Find the ith smallest element
All of the above

Answer- Delete an element (The worst-case time complexity for deleting an element from an array can become O(n).)
  
3) Which one of the following correctly determines the solution of the recurrence relation with T(1) = 1?
    T(n) = 2T(n/2) + Logn
    
O(N) 
O(NlogN)
O(N^2)
O(log N)
  
Answer- O(N)
Explanation- 
https://files.codingninjas.in/step1-10997.jpg
https://files.codingninjas.in/step2-10998.jpg	
The log series summation can be understood from here: https://stackoverflow.com/questions/44231116/is-complexity-ologn-logn-2-logn-4-logn-8-log2-olog
