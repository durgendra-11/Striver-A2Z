#include<bits/stdc++.h>
using namespace std;
void printMS(multiset<int> ms){
    cout<<"The multiset is --"<<endl;
    for(auto it: ms){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    printMS(ms);

    ms.insert(2);
    ms.insert(2);
    ms.insert(2);

    cout<<ms.count(1)<<endl;
    
    printMS(ms);

    ms.erase(2);

    printMS(ms);

    ms.erase(ms.find(1));

    printMS(ms);

    ms.erase(ms.find(1), next(ms.find(1),2));

    printMS(ms);

    cout<<ms.count(1);

    return 0;
}