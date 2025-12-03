#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v) {
    for (auto it : v) cout << it << " ";
    cout << endl;
}

void printMap(map<int,int> m) {
    for (auto it : m) cout << it.first << " " << it.second << endl;
    cout << endl;
}

// comparator for sorting by value, then by key
bool comp(pair<int,int> p1, pair<int,int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    if (p1.first > p2.first) return true;
    return false;
}

int main() {
    vector<int> v = {1,6,3,6,44,5,7,88};
    printVec(v);

    sort(v.begin(), v.end(), greater<int>());
    printVec(v);

    map<int,int> m;
    m[1] = 2;
    m[2] = 1;
    m[4] = 1;
    printMap(m);

    // copy map into vector
    vector<pair<int,int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), comp);

    // print sorted by values
    for (auto it1 : vec) {
        cout << it1.first << " " << it1.second << endl;
    }

    return 0;
}
