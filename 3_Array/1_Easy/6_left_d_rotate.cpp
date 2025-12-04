#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};
    int n=v.size();
    int k;
    cin>>k;
    k=k%n;
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    reverse(v.begin(),v.end());
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}

//brute force approach for this
// int a[]={1,2,3,4,5,6,7};
// int k=3;
// k=k%n;
// int temp[];
// for(int i=0;i<k;i++){
//     temp[i]=a[i];
// }
// for(int i=k;i<n;i++){
//     a[i-k]=a[i];
// }
// for(int i=n-k;i<n;i++){
//     a[i]=temp[i-(n-k)];
// }
