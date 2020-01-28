#include <bits/stdc++.h>

using namespace std;

int main(){
    int money;
    cin>>money;
    int k,m;
    cin>>k>>m;
    int key[k];
    int mouse[m];
    int bill;
    int maxbill=0;
    for(int i=0;i<k;i++){
        cin>>key[i];
    }

    for(int i=0;i<m;i++){
        cin>>mouse[i];
    }

    for(int i=0;i<k;i++){
        for(int j=0;j<m;j++){
            bill=key[i]+mouse[j];
            
            if(bill>=maxbill && bill<=money){
                maxbill=bill;
            }
        
        }
    }
    if(maxbill==0){
        cout<<"-1"<<endl;
    }else {
    cout<<maxbill<<endl;
    }
    
}