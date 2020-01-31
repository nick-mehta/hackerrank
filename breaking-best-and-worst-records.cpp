#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int max;
    int min;
    int count=0;
    int count1=0;
    max=arr[0];
    min=arr[0];
    for(int i=1;i<t;i++){
        if(arr[i]>max){
            max=arr[i];
            count++;
        }
        if(arr[i]<min){
            min=arr[i];
            count1++;
        }
    }
    cout<<count<<" "<<count1<<endl;
}