#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
         hash[s[i]-'a']++;
    }

    char q;
    cin>>q;
    cout<<hash[q-'a'];   // remember if you use 'q'-'a' you will get the frequency of q, always coz you are using the character instead of variable

    return 0;
}