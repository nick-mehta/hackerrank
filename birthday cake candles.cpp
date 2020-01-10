#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a=0,b=0;
    cin >>n;

    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }


    for (int j=0;j<n;j++){
        if (arr[j]>a){
            a=arr[j];
        }

    }
  
    
    for (int k=0;k<n;k++){
        if (arr[k]==a){
            b++;
        }
    }
    cout<<b<<endl;
}
