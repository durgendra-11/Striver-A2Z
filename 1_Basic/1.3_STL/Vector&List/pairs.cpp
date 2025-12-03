#include<bits/stdc++.h>
using namespace std;
int main(){
    //an array of pairs
    pair<int,string> p_arr[5];   
    p_arr[0]={7,"Dhoni"};
    p_arr[1]={18,"Kohli"};
    p_arr[2]={45,"Rohit"};
    p_arr[3]={99,"Ashwin"};
    p_arr[4]={1,"Rahul"};
    for(int i=0;i<5;i++){
        cout<<p_arr[i].first<<"--"<<p_arr[i].second<<"\n";
    }
    swap(p_arr[0],p_arr[4]);
    cout<<"\n"<<"\n";
    for(int i=0;i<5;i++){
        cout<<p_arr[i].first<<"--"<<p_arr[i].second<<"\n";
    }
    cout<<endl;
    pair<int,string> p = {2,"abcd"};
    cout<<p.first<<p.second;
    return 0;
}