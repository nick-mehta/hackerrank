#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    int arr[m];
    int arr1[n];
    int apple=0;
    int orange=0;

    for(int i=0;i<m;i++){
        cin>>arr[i];
        if(a+arr[i]>=s && a+arr[i]<=t){
            apple++;
        }
    }

    for(int i=0;i<n;i++){
        cin>>arr1[i];
        if(b+arr1[i]>=s && b+arr1[i]<=t){
            orange++;
        }
    }

    cout<<apple<<endl<<orange<<endl;
}