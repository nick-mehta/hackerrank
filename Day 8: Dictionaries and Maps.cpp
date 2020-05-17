#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    map<string ,int> book;
    string s;
    int n;
    for(int i=0;i<t;i++){
        cin>>s>>n;
        book[s]=n;
    } 
    while(cin>>s){
        
        
        if(!book[s]){
            cout<<"Not found"<<endl;
        }
        else{
            cout<<s<<"="<<book[s]<<endl;
        }
    } 
    return 0;
}
