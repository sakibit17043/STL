#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls(3, 200);
    ls.push_back(5);
    ls.emplace_back(9);
    ls.push_front(3);
    for (auto i : ls)
    {
        cout << i << " ";
    }
    // list is same as vector only push or pop font is extra feature.
    //Rest all function like size,insert,erase,empty,clear,begin,end,
    //swap all are same as vector. W

    return 0;
}