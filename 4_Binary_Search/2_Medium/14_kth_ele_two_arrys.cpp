#include <bits/stdc++.h>
using namespace std;

//optimal
int kthElement(vector<int> &a, vector<int> &b, int k) {
    // code here
    int n1=a.size();
    int n2=b.size();
    int n=n1+n2;
    //to apply binary search on smaller array
    if(n1>n2) return kthElement(b,a,k);
    
    //number of terms on the left side
    int left=k;
    
    int l=max(0,left-n2);;
    int r=min(left,n1);
    
    while(l<=r){
        //number of terms on left side from array a
        int mid1=l+(r-l)/2;
        //number of terms on right side from array b
        int mid2=left-mid1;
        
        //assign these values in case they dont exist
        int l1=INT_MIN, l2=INT_MIN;
        int r1=INT_MAX, r2=INT_MAX;

        //check if l1,l2,r1,r2 exists
        if(mid1<n1) r1=a[mid1];
        if(mid2<n2) r2=b[mid2];
        if(mid1-1>=0) l1=a[mid1-1];
        if(mid2-1>=0) l2=b[mid2-1];

        if(l1>r2){
            //need lesser from nums1
            r=mid1-1;
        }
        else if(l2>r1){
            //need more from nums1
            l=mid1+1;
        }
        else{
            //the last/greatest item from the left side is the kth item of the combined array
            return max(l1,l2);
        }
    }
    return 0;
}


int main() {
    vector<int> a={2,3,6,7,9};
    vector<int> b={1,4,8,10};
    int k=5;
    int ans=kthElement(a,b,k);
    cout<<ans;
    return 0;
}