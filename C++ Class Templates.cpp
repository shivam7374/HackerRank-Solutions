#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
// class template specialization:
template <class X>
class AddElements  {
X element;
public:
AddElements(X num){
    element=num;
}
X add (X arg) { 
    
return element+arg;
}
};
template <>
class AddElements<string>
{
    private:
        string element;
    public:
        AddElements(string element):
            element {element}
        { }

        string concatenate(string x)
        {
            return element + x;
        }
};
int main () {