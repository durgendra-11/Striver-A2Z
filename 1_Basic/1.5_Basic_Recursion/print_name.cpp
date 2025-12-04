#include<bits/stdc++.h>
using namespace std;
//print name N times

void printName(int cnt){
    if (cnt==0) return;
    cout<<"Harshit"<<endl;
    printName(--cnt);

}
int main(){
    int cnt;
    cin>>cnt;
    printName(cnt);
    return 0;
}