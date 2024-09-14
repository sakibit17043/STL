#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq(3,2);
    dq.push_back(3);
    dq.push_front(1);
    for(int i : dq){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<dq.back();
    cout<<endl<<dq.front()<<endl;
    dq.pop_back();
    dq.pop_front();
   cout<< "back:"<<dq.back();
    cout<<"front:"<<dq.front();
    cout<<endl;
    for(auto i:dq){
        cout<<i<<" ";
    }
    //deque is same as vector
    //begin,end,clear,size,swap,empty etc.
}