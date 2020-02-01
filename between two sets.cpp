#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr1[m];
    int max=0;
    int min=100;
    for(int i=0;i<n;i++){//max element 
        cin>>arr[i];
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<m;i++){  //min element
        cin>>arr1[i];
        if (min>arr1[i]){
            min=arr1[i];
        }
    }

    if(max>min){
        cout<<"0"<<endl;
    }
    else{
int count=n;
    while(count>0){
        count=n;
        for(int i=0;i<n;i++){
            if(max%arr[i]==0){
                count--;
            }
        
        }
        if(count!=0){
            max++;
        }
    }


    int total=m;
    int z=max;
    int out=0;
    bool flag=true;
    while(flag){
        total=m;
        for(int i=0;i<m;i++){
            if(arr1[i]%max==0){
                total--;
            }
        }
        if(total==0){
            out++;
        }
        max=max+z;
        if(max>min){
            flag=false;
        }
    }

    cout<<out<<endl;
    }
}
