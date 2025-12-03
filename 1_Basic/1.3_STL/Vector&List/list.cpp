#include<bits/stdc++.h>
using namespace std;
void printlist(list<int> ls){
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> ls(3,9);

    ls.push_back(2);
    printlist(ls);
    
    ls.emplace_back(4);
    printlist(ls);
    
    ls.push_front(5);
    printlist(ls);

    ls.emplace_front(6);
    printlist(ls);

    ls.pop_back();
    ls.pop_front();
    printlist(ls);

    return 0;
}