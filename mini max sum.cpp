#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[5];
    long long int total=0;

    for(int i=0;i<5;i++){
        cin>>arr[i];
        total+=arr[i];  //total sum of all five int
    }

    int* max;
    int* min;
    max=max_element(arr,arr+5);  //find max int in array
    min=min_element(arr,arr+5);   //find min int in array

    long long int maxsum;
    long long int minsum;
    maxsum=total-*min;    // maximum sum of 4 int is =total - min int
    minsum=total-*max;    //minimum sum of 4 int is =total -max int 

    cout<<minsum<<" "<<maxsum<<endl;
}