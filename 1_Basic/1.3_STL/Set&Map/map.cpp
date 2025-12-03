#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mpp;
    //insertion
    mpp[1]=2;
    mpp.insert({2,4});
    mpp.insert({3,1});

    //finding value by key
    cout<<mpp[1]<<endl;
    cout<<mpp[5]<<endl;
    auto it=mpp.find(3);
    cout<<(*it).first<<" "<<(*it).second;

    return 0;
}