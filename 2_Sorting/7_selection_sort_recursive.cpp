#include <bits/stdc++.h>
using namespace std;

// Function to perform selection sort recursively
void selectionSort(vector<int> &arr, int start) {
    int n = arr.size();
    
    // Base case
    if (start >= n - 1) return;

    // Find index of minimum element in the remaining array
    int minIndex = start;
    for (int i = start + 1; i < n; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }

    // Swap the found minimum with current position
    swap(arr[start], arr[minIndex]);

    // Recur for the next starting index
    selectionSort(arr, start + 1);
}


int main() {
    vector<int> arr={2,4,67,45,18,9,10,25};
    int n=arr.size();   
    selectionSort(arr, 0);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}