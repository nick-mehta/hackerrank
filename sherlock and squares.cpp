#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b;
    int z;
    int sq;
    int count;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        count=0;
        for(int j=a;j<=b;j++){
        z=sqrt(j);
        z=z*z;
        if(z==j){
            count++;
            z=sqrt(z);
            break;

        }

        }
        bool flag=true;
        while(flag){
            z=z+1;
            sq=z*z;
            if(sq<=b){
                count++;
            }
            else{
                flag=false;
            }
        }
        cout<<count<<endl;
    }
}