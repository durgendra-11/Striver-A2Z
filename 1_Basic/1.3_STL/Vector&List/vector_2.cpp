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
    //we should pass by reference if we don' want to make a copy because copying takes O(n).
    //also initialise a vector with 0 or any number of a given size
    vector<int> v(5);
    printVector(v);
    cout<<"\n";
    vector<int> v1(5,2);
    printVector(v1);
    cout<<"\n";
    v1.push_back(7);
    printVector(v1);
    return 0;
}