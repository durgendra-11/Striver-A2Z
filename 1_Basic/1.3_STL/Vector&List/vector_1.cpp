#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    cout<<"size--"<<v.size()<<"\n"<<"vector--";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    //to show that the size of vector changes dynamically
    vector<int> v;   
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        printVector(v);
    }
    printVector(v);
    cout<<v.back()<<" "<<v.front();
    return 0;
}