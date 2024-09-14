#include<bits/stdc++.h>
using namespace std;
int main(){
    //max heap
    priority_queue<int>pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(3);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    //min heap
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(10);
    pq1.push(8);
    pq1.push(2);
    pq1.push(3);
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
        //size empty swap fuction same as others
        //push,pop-O(logn)
        //top-O(1)


}