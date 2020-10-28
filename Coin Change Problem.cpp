//Have A good day visitor
//Author:Saksham Goel

//Link TO the problem: https://www.hackerrank.com/challenges/coin-change/problem

/*
Problem Description:
You are working at the cash counter at a fun-fair, and you have different types of coins available to you in infinite quantities. 
The value of each coin is already given. 
Can you determine the number of ways of making change for a particular number of units using the given types of coins?
*/

#include<bits/stdc++.h> 
  
using namespace std; 
  
long long int count(long long int S[],long long int m,long long int n ) 
{ 
   long long int i, j, x, y; 
    long long int table[n + 1][m]; 
    for (i = 0; i < m; i++) 
        table[0][i] = 1;   
    for (i = 1; i < n + 1; i++) 
    { 
        for (j = 0; j < m; j++) 
        { 
            x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0; 
            y = (j >= 1) ? table[i][j - 1] : 0; 
            table[i][j] = x + y; 
        } 
    } 
    return table[n][m - 1]; 
} 
int main() 
{ 
    long long int n,m;
    cin>>n>>m;
    long long int arr[m];
    for(int i=0;i<m;i++)
    cin>>arr[i];
    cout << count(arr, m, n); 
    return 0; 
} 

