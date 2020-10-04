#include <bits/stdc++.h>

using namespace std;



int main()
{
   int t;
   cin>>t;
   int n,a;
   for(int i=0;i<t;i++){
       cin>>n;
        a=n;
        int d;
        int count=0;
        while(a>0){
            d=a%10;
            if(d!=0){
                    if(n%d==0 ){
                count++;
            }
            }
            
            a=a/10;

        }
        cout<<count<<endl;
   }
}
