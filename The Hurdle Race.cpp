#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    int a=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=a){
            a=arr[i];
        }
    }

    if (a<=k){
        cout<<"0"<<endl;
    }
    else{
        cout<<a-k<<endl;
    }
}
