#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,1,0,0,1,1,1,0,0,0,1,1};
    int maxcount=0;
    int count=0;
    for(int i : v){
        if(i==1){
            count++;
            maxcount=max(maxcount,count);
        }
        else{
            count=0;
        }
    }
    cout<<maxcount<<endl;
    return 0;
}