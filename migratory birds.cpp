#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int a1=0,a2=0,a3=0,a4=0,a5=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            a1++;
        }
        else if(arr[i]==2){
            a2++;
        }
        else if(arr[i]==3){
            a3++;
        }
        else if(arr[i]==4){
            a4++;
        }
        else {
            a5++;
        }
    }

    if(a1>=a2 &&a1>=a3 && a1>=a4 && a1>=a5){
        cout<<"1"<<endl;
    }
    else if(a2>=a1 && a2>=a3 && a2>=a4 && a2>=a5){
        cout<<"2"<<endl;
    }
    else if(a3>=a2 && a3>=a1 && a3>=a4 && a1>=a5){
        cout<<"3"<<endl;
    }
    else if(a4>=a2 && a4>=a3 && a4>=a1 && a4>=a5){
        cout<<"4"<<endl;
    }
    else if(a5>=a2 && a5>=a3 && a5>=a4 && a5>=a1){
        cout<<"5"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }


}
