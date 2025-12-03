#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(3);

    //can not use find directly in deque, you can only use it in set, map etc, so to 
    // delete element by its value we can use find like shown below in deque, list and vector

    auto it = find(dq.begin(), dq.end(), 2);
    dq.erase(it);

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    dq.pop_back();
    dq.pop_front();

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << dq.front() << endl;
    cout << dq.back() << endl;
    

    return 0;
}