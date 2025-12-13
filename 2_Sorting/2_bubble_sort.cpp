#include <bits/stdc++.h>
using namespace std;

//using loops
void bubbleSort(vector<int>& arr) {
    // code here
    int n=arr.size();
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    vector<int> arr={2,4,67,45,18,9,10,25};
    bubbleSort(arr);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}