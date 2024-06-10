#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.size()<<endl;
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.resize(2);
    v.resize(7, 10);
    v.clear();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout<<v.size()<<endl;
    return 0;
}