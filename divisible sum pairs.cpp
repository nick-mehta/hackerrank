#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    int sum=0;
    int count=0;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum=arr[i]+arr[j];
            if(i!=j){
            if(sum%s==0 && sum>=s){
                count++;
                
            }
            }
        }

    }

    count=count/2;
    cout<<count<<endl;
}
