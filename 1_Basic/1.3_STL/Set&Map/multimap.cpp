#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, int> mmap;

    // mmap[1]=3; can not use this

    mmap.insert({1, 5});
    mmap.insert({1, 7});
    mmap.insert({2, 1});
    mmap.insert({2, 3});

    // First occurrence of key=1
    auto it = mmap.find(1);
    if (it != mmap.end())
    {
        cout << "First occurrence: " << it->first << " " << it->second << endl;
    }

    // Last occurrence of key=1
    auto range = mmap.equal_range(1);
    if (range.first != range.second)
    {
        auto last = prev(range.second);
        cout << "Last occurrence: " << last->first << " " << last->second << endl;
    }

    // Print all occurrences of key=1
    cout << "All occurrences of key=1:" << endl;
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
