#include<bits/stdc++.h>
using namespace std;
//print N to 1;

// void f(int i,int n){
//     if(i>n) return;
//     cout<<n<<endl;
//     f(i,n-1);  //dont use n--
// }
// int main(){
//     int n=5,i=1;
//     f(i,n);
//     return 0;
// }

void f(int i){
    if(i==0) return;
    cout<<i<<" ";
    f(i-1);
}
int main(){
    int i=5;
    f(i);
    return 0;
}