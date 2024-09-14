#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    mp.insert({2,3});
    mp.insert({1,5});
    mp.insert({6,3});
    mp.insert({7,8});
 
    mp.insert({12,9});
        mp[12] = 8;
    mp.insert({12,5});
    mp[12] = 70;
    mp[6] =9;
    // for(auto it : mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    // map<string,string> mpp;
    // mpp.insert({"Name","Sakib"});
    // mpp.insert({"Uni","mbstu"});
    // for(auto it : mpp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    auto it = mp.find(1);
    //Time complexity - O(logn)
   multimap<int,int>mmp;
   //same as map but can have duplicate keys
   unordered_map<int,int>ump;
   //it is not sorted map but time complexity is O(1)
   //in worst case O(N).
    }