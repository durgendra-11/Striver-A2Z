#include<bits/stdc++.h>
using namespace std;
int main(){

    //traverse from behind to get gcd faster
    int n1,n2;
    cin>>n1>>n2;
    int gcd=1;
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            gcd=i;
            break;
        }
    }
    cout<<gcd<<endl;

    //using euclidean algorithm  gcd(a,b)=gcd(a-b,b) --> gcd(a,b)=gcd(a%b,b);
    int gcd1=1;
    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        gcd1=n2;
    }
    else{
        gcd1=n1;
    }
    cout<<gcd1<<endl;
    return 0;
}