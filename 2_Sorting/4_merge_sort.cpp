#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted subarrays
void mergeArrays(vector<int> & arr, int low, int mid, int high) {
    int left=low;
    int right=mid+1;

    vector<int> temp;

    // Merging the two subarrays into temp
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copying remaining elements of left subarray, if any
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copying remaining elements of right subarray, if any
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copying the sorted elements back into original array
    for(int i=low; i<=high; i++) {
        arr[i] = temp[i - low];
    }
}


// Function to perform merge sort
void mergeSort(vector<int> & arr, int low, int high) {
    if(low >= high) return;

    int mid = low + (high - low) / 2;

    // Recursively sorting the left half
    mergeSort(arr, low, mid);
    // Recursively sorting the right half
    mergeSort(arr, mid + 1, high);
    // Merging the two sorted halves
    mergeArrays(arr, low, mid, high);
}



int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}