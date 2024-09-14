#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> pt = {1,3};
    cout<<pt.first<<" "<<pt.second<<" ";
    pair<int,pair<int,int>>p={1,{2,3}};
    cout<<p.second.first;
    cout<<endl;
    pair<int,pair<int,char>> arr[]={{1,{2,'r'}},{5,{5,'o'}},{7,{6,'t'}}};
    cout<<arr[1].second.second;
}