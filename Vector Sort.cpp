#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int n,k;
    cin>>n;
    for(int j=0;j<n;j++)
    {cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for (auto i = v.begin(); i != v.end(); i++) 
        cout << *i << " "; 
    return 0;
}
