#include <bits/stdc++.h>
using namespace std;
int main()
{
    // using set
    //  vector<int> v1={1,2,3,4,5},v2={1,2,3,7,8};
    //  set<int> s(v1.begin(),v1.end());
    //  s.insert(v2.begin(),v2.end());
    //  vector<int> ans(s.begin(),s.end());
    //  for(int i : ans){
    //      cout<<i<<" ";
    //  }

    // using two pointer
    vector<int> vec1 = {1, 2, 3, 4, 5, 6}, vec2 = {2, 3, 5, 7, 9, 11};
    int n = vec1.size(), m = vec2.size();
    int i = 0, j = 0;
    vector<int> v;

    while (i < n && j < m)
    {
        if (vec1[i] < vec2[j])
        {
            if (v.empty() || v.back() != vec1[i])//it simply means ki ans vector me wo element already present nahi hona chahiye
            {
                v.push_back(vec1[i]);
                i++;
            }
        }
        else if (vec1[i] > vec2[j])
        {
            if (v.empty() || v.back() != vec2[j])
            {
                v.push_back(vec2[j]);
                j++;
            }
        }
        else
        {
            if (v.empty() || v.back() != vec1[i])
            {
                v.push_back(vec1[i]);
                i++;
                j++;
            }
        }
    }
    while (i < n)
    {
        if (v.empty() || v.back() != vec1[i])
        {
            v.push_back(vec1[i]);
            i++;
        }
    }
    while (j < m)
    {
        if (v.empty() || v.back() != vec2[j])
        {
            v.push_back(vec2[j]);
            j++;
        }
    }
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}