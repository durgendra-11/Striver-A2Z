#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,20,45,36,77,54,34};

    //using iterator
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // using auto
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //using for each loop
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}