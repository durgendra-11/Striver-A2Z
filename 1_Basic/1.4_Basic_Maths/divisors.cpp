#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // this is basic and its complexity is O(n)
    vector<int> divisor;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
        }
    }
    for (auto it : divisor)
    {
        cout << it << " ";
    }
    cout << endl;

    
    // now the optimal approach
    vector<int> div;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if ((n / i) != i)
            {
                div.push_back((n / i));
            }
        }
    }
    sort(div.begin(), div.end());
    for (auto it : div)
    {
        cout << it << " ";
    }

    return 0;
}