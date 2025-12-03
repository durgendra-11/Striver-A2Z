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
    //array of vectors
    int N;
    cin>>N;
    vector<int> v[N]; //created an array of size N which consists N vectors
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        printVector(v[i]);
    }
    cout<<"array ke third vector ka third element"<<v[2][2];
    return 0;
}