#include<bits/stdc++.h>
using namespace std;

//function to find nCr
int nCr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);   //numerator
        res=res/(i+1);   //denominator
    }
    return res;
}
int main(){
    int row=5,col=3;
    int ans=nCr(row-1,col-1);
    cout<<ans;
    return 0;
}