#include<bits/stdc++.h>
using namespace std;

//brute
// void nCr(int n,int r){
//     int res=1;
//     for(int i=0;i<r;i++){
//         res=res*(n-i);   //numerator
//         res=res/(i+1);   //denominator
//     }
//     cout<<res<<" ";
// }
// int main(){
//     int row=5; //fifth row
//     for(int col=1;col<=row;col++){   //here column for nth row goes from 1 to n
//         nCr(row-1,col-1);
//     }
//     return 0;
// }

//optimal
int main(){
    int row=5;
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
    return 0;
}