#include<bits/stdc++.h>
using namespace std;
void f(int cnt){
    if (cnt==20) return; //base condition
    cout<<cnt<<" ";
    cnt++;
    f(cnt);
}
int main(){
    int c=0;
    f(c);
    return 0;
}