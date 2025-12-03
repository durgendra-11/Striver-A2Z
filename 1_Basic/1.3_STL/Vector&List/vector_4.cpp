#include<bits/stdc++.h>
using namespace std;
void printVector(vector<pair<int,int>> v){
    cout<<"size--"<<v.size()<<"\n"<<"vector--"<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<" ";
        cout<<"\n";
    }
    cout<<"\n";
}
int main(){
    //vector of pairs
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVector(v);
    return 0;
}