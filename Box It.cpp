
class Box
{
private:
int l,b,h;
public:
Box()
{
    l=0;
    b=0;
    h=0;
}
Box(int length, int breadth, int height)
{
    l=length;
    b=breadth;
    h=height;
}
Box(const Box &obj)
{
    l=obj.l;
    b=obj.b;
    h=obj.h;

}
int getLength(){
    return l;
}
int getBreadth(){
    return b;
}
int getHeight(){
    return h;
}
long long CalculateVolume()
{
    return ((long long)l*b*h);
}
bool operator<(Box & x)
{
    if(l<x.l || (b<x.b && l==x.l) || (h<x.h && b==x.b && l==x.l))
{ 
    return 1;
}
else {
return 0;
}

}
};
ostream& operator <<(ostream& out,Box &z)
{
    out << z.getLength() << " " << z.getBreadth() << " " << z.getHeight();
    return out;

};

//Overload operator < as specified

//Overload operator << as specified

