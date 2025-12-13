#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main() {
    vector<int> arr={2,4,67,45,18,9,10,25};
    insertionSort(arr);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}