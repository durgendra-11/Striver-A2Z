#include <bits/stdc++.h>
using namespace std;

// brute
// double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
// {
//     // Create a merged vector to store sorted elements
//     vector<int> merged;

//     // Initialize two pointers
//     int i = 0, j = 0;

//     // Merge both arrays in sorted order
//     while (i < nums1.size() && j < nums2.size())
//     {
//         // Push the smaller element into merged
//         if (nums1[i] < nums2[j])
//         {
//             merged.push_back(nums1[i]);
//             i++;
//         }
//         else
//         {
//             merged.push_back(nums2[j]);
//             j++;
//         }
//     }

//     // Add remaining elements from nums1
//     while (i < nums1.size())
//     {
//         merged.push_back(nums1[i]);
//         i++;
//     }
//     // Add remaining elements from nums2
//     while (j < nums2.size())
//     {
//         merged.push_back(nums2[j]);
//         j++;
//     }
//     // Find median based on size
//     int n = merged.size();
//     if (n % 2 == 1)
//         return (double)merged[n / 2];
//     else
//         return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
// }





// better
// double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
// {
//     int n1 = nums1.size(), n2 = nums2.size();

//     int ind2 = (n1 + n2) / 2;
//     int ind1 = ind2 - 1;

//     int ind1el = -1, ind2el = -1;

//     int i = 0, j = 0;
//     int count = 0;

//     while (i < n1 && j < n2)
//     {
//         if (nums1[i] < nums2[j])
//         {
//             if (count == ind1)
//                 ind1el = nums1[i];
//             if (count == ind2)
//                 ind2el = nums1[i];
//             i++;
//         }
//         else
//         {
//             if (count == ind1)
//                 ind1el = nums2[j];
//             if (count == ind2)
//                 ind2el = nums2[j];
//             j++;
//         }
//         count++;
//     }

//     // remaining of nums1
//     while (i < n1)
//     {
//         if (count == ind1)
//             ind1el = nums1[i];
//         if (count == ind2)
//             ind2el = nums1[i];
//         i++;
//         count++;
//     }

//     // remaining of nums2
//     while (j < n2)
//     {
//         if (count == ind1)
//             ind1el = nums2[j];
//         if (count == ind2)
//             ind2el = nums2[j];
//         j++;
//         count++;
//     }

//     if ((n1 + n2) % 2 == 0)
//     {
//         return (ind1el + ind2el) / 2.0;
//     }
//     return (double)ind2el;
// }





//optimal
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
    int n1=nums1.size();
    int n2=nums2.size();
    int n=n1+n2;
    //to apply binary search only on the smaller array
    if(n1>n2) return findMedianSortedArrays(nums2,nums1);

    //number of terms on the left side
    int left=(n+1)/2;
    int l=0,r=n1;
    while(l<=r){
        //need how much from nums1 on left side
        int mid1=l+(r-l)/2;
        //need how much from nums2 on left side
        int mid2=left-mid1;

        //assign these values in case they dont exist
        int l1=INT_MIN, l2=INT_MIN;
        int r1=INT_MAX, r2=INT_MAX;

        //check if l1,l2,r1,r2 exists
        if(mid1<n1) r1=nums1[mid1];
        if(mid2<n2) r2=nums2[mid2];
        if(mid1-1>=0) l1=nums1[mid1-1];
        if(mid2-1>=0) l2=nums2[mid2-1];

        if(l1>r2){
            //need lesser from nums1
            r=mid1-1;
        }
        else if(l2>r1){
            //need more from nums1
            l=mid1+1;
        }
        else{
            if(n%2==0){
                return (double)((max(l1,l2)+min(r1,r2))/2.0);
            }
            return (double)max(l1,l2);
        }
    }
    return 0;
}

int main()
{
    vector<int> nums1 = {1, 3, 4, 7, 10, 12};
    vector<int> nums2 = {2, 3, 5, 15};
    double ans = findMedianSortedArrays(nums1, nums2);
    cout << ans;
    return 0;
}