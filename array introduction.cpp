#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    int n;
    cin >> n;

    int arr[n];
    int arr2[n];
  
    for (int i=0; i<n; i++){
        cin >> arr[i];
         arr2[(n-i-1)]=arr[i];
    } 
    
    for (int i=0;i<n;i++){
        
         cout << arr2[i] << " ";
    }
  
    return 0;
}