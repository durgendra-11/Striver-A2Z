#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    cout<<"SIZE--"<<v.size()<<endl;
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    //insertion

    //1.
    vector<int> v(5,10);
    printvec(v);

    //2.
    v.insert(v.begin()+2,25);
    printvec(v);

    //3.
    v.insert(v.begin()+4,3,66);
    printvec(v);

    //4.
    v.push_back(5);
    printvec(v);

    //deletion

    //1.
    v.erase(v.begin()+7);
    printvec(v);

    //2.
    v.erase(v.begin()+1,v.begin()+5);
    printvec(v);

    //3.
    v.pop_back();
    printvec(v);

    //4.
    v.clear();
    printvec(v);

    cout<<v.empty();
    return 0;
}