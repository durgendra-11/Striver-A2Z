#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,5,16,28,38,139};
    int hash[10]={0};

    // Count based on last digit
    for(int i : arr){
        hash[i % 10]++;
    }

    // Print frequencies
    for(int j=0; j<10; j++){
        cout<<j<<" -> "<<hash[j]<<endl;
    }

    return 0;
}
