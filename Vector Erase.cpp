#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int n,k,j,l,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {cin>>k;
        v.push_back(k);
    }
    cin>>j;
    v.erase(v.begin()+(j-1));
    cin>>l>>m;
    v.erase(v.begin()+(l-1),v.begin()+(m-1));
    cout<<v.size()<<endl;
    for(auto h=v.begin();h!=v.end();h++)
    {
        cout<<*h<<" ";
    }



    return 0;
}
