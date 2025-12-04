#include<bits/stdc++.h>
using namespace std;
//print N to 1 using backtracking

void f(int i,int n){
    if(i>n) return;
    f(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n=5,i=1;
    f(i,n);
    return 0;
}