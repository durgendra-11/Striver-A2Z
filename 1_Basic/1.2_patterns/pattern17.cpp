#include<bits/stdc++.h>
using namespace std;
void alphaHill(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        char ch='A';
        for(int j=0;j<2*i+1;j++){
            if(j<i){
                cout<<ch<<" ";
                ch++;
            }
            else{
                cout<<ch<<" ";
                ch--;
            }

        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    alphaHill(n);
    return 0;
}