// Whis and Beerus are playing a new game today. 
// They form a tower of N coins and make a move in alternate turns. 
// Beerus plays first. In one step, the player can remove either 1, X, or Y coins from the tower. 
// The person to make the last move wins the game. Can you find out who wins the game?
  
// Sample Input 1 :
// 4 2 3
// Sample Output 1 :
// Whis

// Sample Input 2 :
// 10 2 4
// Sample Output 2 :
// Beerus
// Explanation to Sample Input 1:
// Initially, there are 4 coins,  In the first move, Beerus can remove either 1, 2, or 3 coins in all three cases, Whis can win by removing all the remaining coins.

string findWinner(int n, int x, int y){
    
    int *dp = new int[n + 1];

    dp[0] = false;
    dp[1] = true;

    for (int i = 2; i <= n; i++)
    {
        if (i - 1 >= 0 and !dp[i - 1])
            dp[i] = true;
        else if (i - x >= 0 and !dp[i - x])
            dp[i] = true;
        else if (i - y >= 0 and !dp[i - y])
            dp[i] = true;
        else
            dp[i] = false;
    }

    if (dp[n])
        return "Beerus";
    else
        return "Whis";
}

/*
#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	cout << findWinner(n, x, y);
}
*/
