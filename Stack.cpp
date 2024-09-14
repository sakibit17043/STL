#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(6);
    st.push(9);
    st.push(10);
   cout<<st.top();
   cout<<endl;
   cout<<"print: "<<endl;
//    cout<<st.size();
   while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
   }
   cout<<endl<<st.empty();
    return 0;
}
//  push,pop,top-O(1)