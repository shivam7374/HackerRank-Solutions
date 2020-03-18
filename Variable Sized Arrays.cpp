#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,o,l,x;
    cin>>n>>m;
    int **a=new int*[n];
    for(int i=0;i<n;i++)
    {
        cin>>o;
        a[i]=new int[o];
        for(int j=0;j<o;j++)
        {
            cin>>a[i][j];
        }
    }   
    for(int k=0;k<m;k++)
    {
        cin>>l>>x;
        cout<<a[l][x]<<endl;
    }
    return 0;
}

