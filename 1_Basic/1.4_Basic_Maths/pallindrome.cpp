#include <bits/stdc++.h>
using namespace std;
int main()
{
    // can do the normal one where we reverse the whole number and then check it with original, but
    // bool isPalindrome(int x)
    // {
    //     if (x < 0)
    //     { // negative numbers cannot be palindrome
    //         return false;
    //     }
    //     int temp = x, rem = 0, rev = 0;
    //     while (temp > 0)
    //     { // reverse the number
    //         rem = temp % 10;
    //         rev = rev * 10 + rem;
    //         temp = temp / 10;
    //     }
    //     return rev == x; // check if reversed == original
    // }

    // by conerting to string
    int n;
    cin >> n;
    bool flag = 1;
    string s = to_string(n);
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        if (s[i] != s[sz - i - 1])
            flag = 0;
    }
    if (flag == 0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    // by reversing it left half and comparing the right half
    // class Solution
    // {
    // public:
    //     bool isPalindrome(int x)
    //     {
    //         if (x < 0 || (x % 10 == 0 && x != 0))
    //             return false;

    //         int rev = 0;
    //         while (x > rev)
    //         {
    //             rev = rev * 10 + x % 10;
    //             x /= 10;
    //         }

    //         return x == rev || x == rev / 10; // handles odd length numbers
    //     }
    // };

    return 0;
}