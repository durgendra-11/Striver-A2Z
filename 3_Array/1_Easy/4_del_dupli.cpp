#include<bits/stdc++.h>
using namespace std;
//question demands inplace removal of duplicates, no extra space is allowed

//brute force
int main(){
    int arr[]={1,1,2,2,3,4,4,4,5,5,6};
    set<int> st;
    for(int i : arr){
        st.insert(i);
    }
    int index=0;
    for(auto it : st){
        arr[index]=it;
        index++;
    }
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl<<st.size()<<endl;


    //optuimal approach
    int ar[]={1,1,2,2,3,4,4,4,5,5,6};
    int i=0;
    int n=sizeof(ar)/sizeof(ar[0]);
    for(int j=1;j<n;j++){
        if(ar[j]!=ar[i]){
            ar[i+1]=ar[j];
            i++;
        }
    }
    for(int k=0;k<n;k++){
        cout<<ar[k]<<" ";
    }
    cout<<endl<<i+1;

    return 0;
}