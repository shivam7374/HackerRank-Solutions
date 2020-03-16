#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function 
    int temp=*a;
    *a=(*a)+(*b);
    *b =abs((2*(*b))-(*a)) ;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;

    return 0;
}

