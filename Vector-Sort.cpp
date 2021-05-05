#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int size;
    int a;
    cin>>size;
    for (int i; i<size; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i; i<size; i++) 
    {
        cout<<v[i]<<" ";
    }
    return 0;
}


