#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.first>p2.first) return true;
    return false;
}
int main(){
    vector<pair<int,int>>a={{1,3},{2,5},{2,3},{4,1}};
    sort(a.begin(),a.end(),comp);
    // for(auto i:a){
    //     cout<<i.first<<" "<<i.second;
    //     cout<<endl;
    // }
    // int num =7;
    // int cnt = __builtin_popcount(num);
    // cout<<cnt;
    // long long num = 16;
    // int cnt = __builtin_popcountll(num);
    // cout<<""<<cnt;
    // cout<<"H";
    string s = "321";
    sort(s.begin(),s.end());
    do{
        cout<<s<<" ";
    }
    while(next_permutation(s.begin(),s.end()));
    int b[]={2,34,53,1,8,5};
    int n = sizeof(b)/sizeof(int);
    // cout<<n;
    int maxi =*max_element(b,b+n);
    int min = *min_element(b,b+n);
    cout<<endl<<"Max:"<<maxi<<endl<<"Min:"<<min;
}