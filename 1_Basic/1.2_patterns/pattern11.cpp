#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=0;i<n;i++){
        int num01;
        if(i%2!=0){
            num01=(i+1)/2;
            for(int j=0;j<num01;j++){
                cout<<"0 1 ";
            }
        }
        else{
            num01=i/2;
            cout<<"1 ";
            for(int j=0;j<num01;j++){
                cout<<"0 1 ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}