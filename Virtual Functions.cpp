#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int cur_id2=1,cur_id1=1;
class Person{
    public:
    string name;
    int age;
    virtual void putdata()=0;
    virtual void getdata()=0;
};
class Professor :public Person{
    public:
    int publications;
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id1++<<endl;
    }

};
class Student :public Person{
    public:
    int marks,sum=0;
    void getdata(){
        cin>>name>>age;
    for(int i=0;i<6;i++)
    {
        cin>>marks;
        sum+=marks;
    }
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id2++<<endl;
    }


};

int main(){