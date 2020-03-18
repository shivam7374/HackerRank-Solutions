#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int *p=new int[n];
    for(int j=0;j<n;j++)
    {
        cin>>p[j];
    }  
        for(int j=n-1;j>=0;j--)
    {
        cout<<p[j]<<" ";
    }  
    return 0;
}
