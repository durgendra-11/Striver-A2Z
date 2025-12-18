#include <bits/stdc++.h>
using namespace std;

// Function to perform a single pass of bubble sort
void bubbleSort(vector<int> & arr, int n) {
    // Base case: If the array size is 1 or less, it's already sorted
    if(n == 1) return;

    // One pass of bubble sort
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for the remaining unsorted elements
    bubbleSort(arr, n - 1);
}

int main() {
    vector<int> arr={2,4,67,45,18,9,10,25};
    int n=arr.size();
    bubbleSort(arr, n);
    cout<<"Sorted array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}