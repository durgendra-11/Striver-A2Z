#include<bits/stdc++.h>
using namespace std;
//print from 1 to N using backtracking

void f(int i,int n){
    if(i<1) return;
    f(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n=5;
    f(n,n);
    return 0;
}