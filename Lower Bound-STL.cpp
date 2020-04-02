#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,j,m,i,k,l;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {   cin>>k;
        v.push_back(k);
    } 
    cin>>j;
    for(i=0;i<j;i++)
    {
        cin>>m;
        vector<int>::iterator it=lower_bound(v.begin(),v.end(),m);
        if(v[it-v.begin()]==m)
        {
            cout<<"Yes"<<" "<<(it-v.begin()+1)<<endl;
        }
        else{
            cout<<"No"<<" "<<(it-v.begin()+1)<<endl;
        
        }
    }
    return 0;
}
