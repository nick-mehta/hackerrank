// Complete the equalizeArray function below.
int equalizeArray(vector<int> arr) {
unordered_map<int,int>mp;
for(int i=0;i<arr.size();i++){
    mp[arr[i]]++;
}
int res=-1;
for(auto x:mp){
    if(res<x.second){
        res=x.second;
    }
}
res=arr.size()-res;
return res;

}
