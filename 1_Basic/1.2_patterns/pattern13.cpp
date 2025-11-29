#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<(j+1+count)<<" ";
            
        }
        count+=(i+1);
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}