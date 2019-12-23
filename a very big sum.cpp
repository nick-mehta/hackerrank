#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >>n;
long long int ans=0;
    for (int i =0;i<n;i++){
        long long int num;
        cin >> num;
        ans+=num;
    }
    cout << ans <<endl;
}