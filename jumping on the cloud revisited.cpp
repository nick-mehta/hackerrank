// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {
    int power=100;
    int i=0;
    int l=c.size();
    bool f1=true;
    while(f1){
        i=i+k;
        if(i<l){
            if(c[i]==0){
                power--;
            }
            else{
                power=power-3;
            }
        }
        else{
            i=i%l;//keep moving in circular path
            if(c[i]==0){
                power--;
            }
            else{
                power=power-3;
            }
        }
        if(i==0){
            f1=false;
            break;
        }
    }
return power;
}
