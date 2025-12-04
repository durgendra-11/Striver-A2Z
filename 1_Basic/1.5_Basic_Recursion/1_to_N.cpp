#include<bits/stdc++.h>
using namespace std;
//print 1 to N

void f(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    f(i+1,n);

}
int main(){
    int i=1,n=5;
    f(i,n);
    return 0;
}
