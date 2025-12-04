#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // brute force
    int count = 0;

    int temp = n;

    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    cout << count << endl;

    // optimal

    int count1 = (int)(log10(n) + 1);

    cout << count1 << endl;

    return 0;
}