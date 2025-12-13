#include <bits/stdc++.h>
using namespace std;

// Brute Force O(n^2) O(1)
void printDuplicatesBruteForce(const vector<int>& arr) {
    cout << "Duplicate elements are: ";
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

// Sorting O(n log n) O(1)
void printDuplicatesSorting(vector<int> arr) {
    sort(arr.begin(), arr.end());
    cout << "Duplicate elements are: ";
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            cout << arr[i] << " ";
            while (i + 1 < arr.size() && arr[i] == arr[i + 1])
                i++;
        }
    }
    cout << endl;
}

// Frequency Array O(n) O(k)
void printDuplicatesFrequencyArray(const vector<int>& arr) {
    int maxElement = *max_element(arr.begin(), arr.end());
    vector<int> freq(maxElement + 1, 0);
    for (int num : arr) freq[num]++;

    cout << "Duplicate elements are: ";
    for (size_t i = 0; i < freq.size(); i++)
        if (freq[i] > 1) cout << i << " ";
    cout << endl;
}

// Set O(n) O(n)
void printDuplicatesSet(const vector<int>& arr) {
    unordered_set<int> seen, duplicates;
    for (int num : arr) {
        if (seen.count(num))
            duplicates.insert(num);
        else
            seen.insert(num);
    }

    cout << "Duplicate elements are: ";
    for (int num : duplicates) cout << num << " ";
    cout << endl;
}

// Hash Map O(n) O(n)
void printDuplicatesHashMap(const vector<int>& arr) {
    unordered_map<int, int> mp;
    for (int num : arr) mp[num]++;

    cout << "Duplicate elements are: ";
    for (auto &p : mp)
        if (p.second > 1) cout << p.first << " ";
    cout << endl;
}

// Negative Marking O(n) O(1)
void printDuplicatesNegativeMarking(vector<int>& arr) {
    cout << "Duplicate elements are: ";
    for (size_t i = 0; i < arr.size(); i++) {

        int index = abs(arr[i]);

        if (index >= arr.size()) continue; // safety check

        if (arr[index] < 0) {
            cout << index << " ";
        } else {
            arr[index] = -arr[index];
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 3, 2, 1};

    printDuplicatesBruteForce(arr);
    printDuplicatesSorting(arr);
    printDuplicatesFrequencyArray(arr);
    printDuplicatesSet(arr);
    printDuplicatesHashMap(arr);
    printDuplicatesNegativeMarking(arr);

    return 0;
}
