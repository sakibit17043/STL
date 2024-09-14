#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(4);
    q.push(6);
    cout<<q.front()<<" ";
    cout<<q.back();
    q.push(7);
    cout<<endl;
    cout<<q.front()<<" "<<q.back();
    q.push(10);
    q.pop();
    cout<<endl;
    cout<<q.front()<<" "<<q.back();
    // rest of size,swap,empty,etc same as stack; 
    // push,pop,front-O(1)
    return 0;
}