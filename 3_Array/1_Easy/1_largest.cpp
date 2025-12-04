#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,34,5,6,78,-45,0,33,44,45,77};
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i : arr){
        if(i>largest) largest=i;
        if(i<smallest) smallest=i;
    }

    cout<<"largest -> "<<largest<<" smallest -> "<<smallest;
    return 0;
}