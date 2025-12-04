#include<bits/stdc++.h>
using namespace std;
//reversing an array

void rev_arr(int arr[],int i,int j){
    if(i>=j) return;

    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

    rev_arr(arr,i+1,j-1);

}

int main(){
    int arr[]={2,4,5,3,9,4};
    int i=0,j=sizeof(arr)/sizeof(arr[0])-1;

    rev_arr(arr,i,j);

    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}