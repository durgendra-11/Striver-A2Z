#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0,rem;
    while(n!=0){
        rem=n%10;
        n=n/10;

        // to check overflow of 32 bit integer
        if(rev>INT32_MAX/10 || (rev==INT32_MAX && rem>7)) return 0;
        if(rev<INT32_MIN/10 || (rev==INT32_MIN && rem<-8)) return 0;

        rev=rev*10+rem;
    }
    cout<<rev;
    return 0;
}