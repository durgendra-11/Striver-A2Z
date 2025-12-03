#include<bits/stdc++.h>
using namespace std;
void printQueue(queue<int> q){
    cout<<"Queue elements from from to back ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(1);

    printQueue(q);

    q.pop();

    cout<<q.front()<<" "<<q.back()<<endl;

    q.push(6);
    q.push(7);

    printQueue(q);

    return 0;
}