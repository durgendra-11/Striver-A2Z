#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    cout<<"size--"<<v.size()<<"\n"<<"vector--";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    //vector of vectors
    int N;
    cin>>N;
    vector<vector<int> > v; //created a vector v which consists of various vector
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<int> temp; //created a temoprary vector
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x); //using for loop, pushed all the integer values in temp vector
        }
        v.push_back(temp);// pushed the temp vector in vector v

        //v.push_back(15);------ it is wrong kyuki ham vector v me ek vector ko hi pushback kar sakte hai

    }
    for(int i=0;i<N;i++){
        printVector(v[i]);
    }
    cout<<"vector ke first vector ka first element "<<v[0][0]<<"\n";

    v[0].push_back(10); //vector v ke first vector me 10 pushback kar diya
    for(int i=0;i<N;i++){
        printVector(v[i]);
    } 
    cout<<"\n";

    v.push_back(vector<int> ()); //vector v me empty vector pushback kar diya
    for(int i=0;i<v.size();i++){
        printVector(v[i]);
    }
    return 0;
}