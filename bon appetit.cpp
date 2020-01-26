#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int bill=0;
    int s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i!=k){
            bill+=arr[i];
        }
    }
    bill=bill/2;
    cin>>s;

    if(bill==s){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<s-bill<<endl;
    }
}