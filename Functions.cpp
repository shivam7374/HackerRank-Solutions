#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if(a>=b && a>=c && a>=d)
    {
        return a;
    }
    if(b>=a && b>=c && b>=d)
    {
        return b;
    }
    if(c>=b && c>=a && c>=d)
    {
        return c;
    }
    if(d>=b && d>=c && d>=a)
    {
        return d;
    }
    return 0;
}
int main() {
    int a, b, c, d;
   cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}

