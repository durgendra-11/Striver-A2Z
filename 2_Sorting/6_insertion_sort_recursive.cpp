#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> & arr, int n) {
    // Base case: If the array size is 1 or less, it's already sorted
    if(n <= 1) return;

    // Sort the first n-1 elements
    insertionSort(arr, n - 1);

    // Insert the nth element into its correct position in the sorted array
    int key = arr[n-1];
    int j = n - 2;

    // Shift elements of arr[0..n-2], that are greater than last,
    // to one position ahead of their current position
    while(j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}
int main() {
    vector<int> arr={2,4,67,45,18,9,10,25};
    int n=arr.size();
    insertionSort(arr, n);
    cout<<"Sorted array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}