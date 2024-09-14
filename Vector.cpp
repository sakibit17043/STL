#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    for(int i =0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
     cout<<endl;
}
void printVector(vector<pair<int,int>> v){
    for(int i =0; i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v={1,2,5};
    print(v);
    v[2] = 3;
    v.push_back(5);
    v[3] = 4;
    v.emplace_back();
    v[4] = 5;
    print(v);
    // vector <pair<int,int>> vec;
    // vec.push_back({7,8});
    // vec.emplace_back(8,0);
    // printVector(vec);
    vector<int> v1(5,100);
    vector<int>v2=v1;
    vector<int>n(5,2);
    n.emplace_back(3);
    print(v1);
    print(v2);
    v1.emplace_back(5);
    v2[2] = 3;
    print(v1);
    print(v2);
    print(n);
    cout<<n.at(2);
    
    // cout<<*(it);
    vector<int> x ={1,2,3,4,8,9};
    vector<int>::iterator it=x.begin();
    for(vector<int>::iterator i = x.begin(); i!=x.end(); i++){
        cout<<*i<<" ";
    }
    cout<<*(x.rend()+1);
    for(auto i = x.begin(); i!=x.end(); i++){
        cout<<*i<<" ";
    }
    for(auto i:x){
        cout<<i<<" ";
    }
    cout<<endl;
    x.erase(x.begin()+2,x.end()-1);
    for(auto i:x){
        cout<<i<<" ";
    }
    vector<int>vec(5,100);
    for(auto i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
    vec.insert(vec.begin(),300);
    print(vec);
    vec.insert(vec.begin()+2,3,400);
    print(vec);
    vector<int>copy(5,200);
    vec.insert(vec.begin()+2,2,200);
    for(auto i : vec){
        cout<<i<<" ";
            }
 
}