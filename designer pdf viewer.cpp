#include <bits/stdc++.h>

using namespace std;

int main(){
    int height[26];
    string s;
    
    for(int i=0;i<26;i++){
        cin>>height[i];
    
    }
    cin>>s;
    int l;
    l=s.length();

    int h=0;
    int temp;
    int local;

    for(int i=0;i<l;i++){
        char c=s[i];
        temp=int(c);
        temp=temp-97;
        local=height[temp];

        if(local>=h){
            h=local;
        }
    }

    cout<<l*h<<endl;
}
