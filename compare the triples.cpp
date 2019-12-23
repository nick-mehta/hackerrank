#include <bits/stdc++.h>

using namespace std;

int main(){

    int a[3];
    for (int i=0;i<3;i++){
        cin >> a[i];
    }

    int b[3];
    for (int i=0;i<3;i++){
        cin >> b[i];
    }

    int x=0,y=0;
   for (int i=0;i<3;i++){
       if (a[i]<b[i]){
           y++;
       }
       else if (a[i]>b[i]){
           x++;
       }
   }

cout << x <<" "<< y<< endl;
}