#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> s;
    int n,number,type;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>type>>number;
        if(type==1)
        {
            s.insert(number);
        }
        else if(type==2)
        {
            s.erase(number);
        }
        else
        {   
         cout<<((s.find(number)==s.end())?"No":"Yes")<<endl;
    
        }

    }  
    return 0;
}



