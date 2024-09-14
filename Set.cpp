#include<bits/stdc++.h>
using namespace std;
int main(){
    //sorted and unique vector but inside tree implemente;
    set<int>st;
    st.insert(5);
    st.insert(3);
    st.emplace(4);
    st.insert(9);
    st.insert(2);
    st.insert(3);
    st.insert(10);
    st.insert(5);
    st.insert(12);
    st.insert(12);
    st.insert(16);
    st.erase(3);
    cout<<st.size();
    cout<<endl;
    auto it1 = st.find(4);
    auto it2 = st.find(12);
    st.erase(it1,it2);
    cout<<st.count(19);
    for(auto it: st){
        cout<<it<<" ";
    }
    cout<<endl;
    auto ind1 = st.lower_bound(6);
    auto ind2 = st.upper_bound(9);
    cout<<*ind1<<" ";
    cout<<*ind2;

    // Time complexity-O(logn)
    
    multiset<int>ms;
    ms.insert(5);
    ms.insert(7);
    ms.insert(7);
    ms.insert(7);
    ms.insert(2);
    ms.erase(5);
    ms.insert(12);
    ms.insert(1);
    cout<<ms.size();
    cout<<endl;
    ms.erase(1);
    for(int i : ms){
        cout<<i<<" ";
    }
    cout<<endl<<ms.count(12);
    unordered_set<int>uSt;
    /*Only lower bound and upperbound
    doesnot work in unordered set but
    rest of function work same.
    It does not stores in any particular order
    it has a better complexity-O(1) than set in 
    most cases,except some when collision happens.
    */


}