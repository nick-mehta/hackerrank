#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; //array length
    cin>>n;
    int arr[n];  //array
    for(int i=0;i<n;i++){  //input of array
        cin>>arr[i];
    }
int temp;  //variable
int a;    //variable
int count;   //variable
int num=0;   //variable
    for(int i=0;i<n;i++){   // 1st for loop
        count=0;
        for(int j=0;j<n;j++){  //2nd for loop 
            temp=0;
            a=arr[i]-arr[j];  //find differnce between element and save to a
            if(abs(a)<=1){  //if diff is less than or equal to one 
                for(int k=0;k<n;k++){   /* 
                count how many time that two numbers are in the array 
                and save that count into temp
                
                 */
                    if(arr[k]==arr[i] || arr[k]==arr[j]){
                        temp++;
                    }
                }

            }
            /*   
            if that count is bgger thn previous count than save new count 
            */
            if(temp>count){
                count=temp;
            }
        }
        if(count>num){
            num=count;
        }
    }
    cout<<num<<endl;
}