#include<bits/stdc++.h>
using namespace std;
//Set is sorted and unique
void printSet(set<int> st){
    cout<<"The set is "<<endl;;
    for(auto it: st){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(4);
    st.insert(3);
    st.insert(5);

    printSet(st);

    st.erase(3);

    printSet(st);

    auto it1=st.find(2);
    st.erase(it1);

    printSet(st);

    st.insert(6);
    st.insert(7);

    auto it2=st.find(4), it3=st.find(6);
    st.erase(it2,it3);

    printSet(st);
    
    cout<<st.count(1);
    return 0;
}