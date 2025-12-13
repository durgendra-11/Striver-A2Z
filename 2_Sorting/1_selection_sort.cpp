#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr) {
    int n=arr.size();
    for(int i=0;i<n;i++){
        
        //find min index
        int minIndex=i;
        
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        //swap min of unsorted part with first of unsorted part
        swap(arr[i],arr[minIndex]);
    }
}
int main() {
    vector<int> arr={2,4,67,45,18,9,10,25};
    selectionSort(arr);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}