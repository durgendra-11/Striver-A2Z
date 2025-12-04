#include<bits/stdc++.h>
using namespace std;
//check for pallindrome

bool pal(string s,int i,int j){
    if(i>=j) {
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }

    pal(s,i+1,j-1);
}

int main(){
    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    cout<<boolalpha<<pal(s,i,j);  //use boolalpha
    return 0;
}