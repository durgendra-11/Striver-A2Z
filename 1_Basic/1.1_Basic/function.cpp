//function to add two numbers
#include<bits/stdc++.h>
using namespace std;
int addnum(int a,int b){
    int sum=a+b;
    return sum;
}
void fourier(int n){
    n=n+15;
    cout<<n;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<addnum(n1,n2)<<endl;
    fourier(25);
    return 0;
}
