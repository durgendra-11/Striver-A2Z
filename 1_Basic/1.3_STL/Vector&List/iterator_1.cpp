#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,4,5,7};
    //accessing through indices
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    vector<int> ::iterator it;
    //accessing through iterators
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it)<<"\n";
    }

    vector<pair<int,int> > v1={{1,2},{3,4},{5,6}};
    //accessing vector of pair through iterator
    vector<pair<int,int> > :: iterator it1;
    for(it1=v1.begin();it1!=v1.end();it1++){
        cout<<(*it1).first<<" "<<(it1->second)<<"\n"; 
        //in place of (*it).first we can also use (it->first)
    }
    return 0;
}