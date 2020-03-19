
class Student
{
    public:
    int marks[5],sum;
    void input()
    {
        for(int k=0;k<5;k++)
        {
            cin>>marks[k];
        }
    };
    int calculateTotalScore()
    {
        for(int k=0;k<5;k++)
        {
            sum=sum+marks[k];
        }
        return sum;
    };
    
};

// Write your Student class here

