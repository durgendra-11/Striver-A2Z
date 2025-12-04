#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n,rem,sum=0;
        while(temp>0){
            rem=temp%10;
            sum=sum+round(pow(rem,3));
            temp/=10;
        }
        if(sum==n) {
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }
    return 0;
}