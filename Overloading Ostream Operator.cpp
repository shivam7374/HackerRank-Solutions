
// Enter your code here.
ostream& operator<<(ostream& dout,Person p)
{
    dout<<"first_name"<<"="<<p.get_first_name()<<","<<"last_name"<<"="<<p.get_last_name();
    return dout;
}
