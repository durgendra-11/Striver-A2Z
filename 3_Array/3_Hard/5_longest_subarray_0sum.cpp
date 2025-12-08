#include<bits/stdc++.h>
using namespace std;
//brute

//optimal
int main(){
    //brute
    // find the sum of all the sub arrays, if sum==0 then the length = max of (length,length of that subarray)


    
    //optimal  ----> prefix sum + hashmap
    vector<int> arr={15,-2,2,-8,1,7,10,23};
    int n=arr.size();
        unordered_map<long long,int> mpp;
        long long sum=0;
        int maxlen=0;
        int len=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                maxlen=max(maxlen,i+1);
            }
            //find if the sum has previously occured 
            if(mpp.find(sum)!=mpp.end()){
                len=i-mpp[sum];
                maxlen=max(len,maxlen);
            }
            if(mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
        }
    cout<<maxlen;
    return 0;
}