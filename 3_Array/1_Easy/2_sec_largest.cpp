#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[]={1,2,34,5,6,78,-45,0,33,-18,44,45,77};
    int largest=INT_MIN;
    int smallest=INT_MAX;

    //better approach
    //find largest/smallest
    for(int i : arr){
        if(i>largest) largest=i;
        if(i<smallest) smallest=i;
    }

    //find second largest/smallest
    int slargest=INT_MIN;
    int ssmallest=INT_MAX;
    for(int i : arr){
        if(i>slargest && i<largest) slargest=i;
        if(i<ssmallest && i>smallest) ssmallest=i;
    }
    cout<<"second largest -> "<<slargest<<" second smallest -> "<<ssmallest<<endl;




    //optimal approach
    int max=arr[0],sec_max=INT_MIN,min=arr[0],sec_min=INT_MAX;
    for(int i : arr){
        if(i>max){
            sec_max=max;
            max=i;
        }
        else if(i<max && i>sec_max){
            sec_max=i;
        }
        else if(i<min){
            sec_min=min;
            min=i;
        }
        else if(i>min && i<sec_min){
            sec_min=i;
        }
    }
    //this is to prevent runtime error if we have an array with only one type of element
    if((sec_max == INT_MIN) || (sec_min == INT_MAX) ){
        cout<<"no second largest/smallest found";
        return 0;
    }

    cout<<"second largest -> "<<sec_max<<" second smallest -> "<<sec_min<<endl;
    return 0;
}