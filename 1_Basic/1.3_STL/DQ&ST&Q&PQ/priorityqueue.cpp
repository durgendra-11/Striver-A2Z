#include<bits/stdc++.h>
using namespace std;
int main(){
    //max p q
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(8);
    pq.push(10);
    
    cout<<pq.top()<<endl;

    pq.pop();

    cout<<pq.top()<<endl;

    //min p q
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.push(10);

    cout<<pq1.top()<<endl;

    pq1.pop();

    cout<<pq1.top()<<endl;
    return 0;
}