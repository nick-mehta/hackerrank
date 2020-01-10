#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    int g;
    int a,b;

    for (int i=0;i<n;i++){
        cin >>g;
        a=0;
        b=0;
        if (g>37){
            a=g/5; //g=43,a=8,b=3
            b=g%5;

            if(b>2){
                a++;  //a=9
                g=a*5;  //9*5=45=g
            }
        }

        cout <<g<<endl;
    }
}
