#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,marks,type;
    string name;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>type>>name;
        if(type==1)
        {   cin>>marks;
            m[name]+=marks;
        }
        else if(type==2)
        {
            m.erase(name);
        }
        else{
            cout<<m[name]<<endl;
        }
    } 
    return 0;
}



