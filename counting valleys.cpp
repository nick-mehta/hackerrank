#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int a=0;
    int b=0;
    int count=0;

    for (int i=0;i<n;i++){
        if (arr[i]=='U'){
            a++;
        }
        else{
            a--;
        }
        if (a==-1  && b==0){
            count++;
        }
        b=a;
    }
    cout<<count<<endl;
}