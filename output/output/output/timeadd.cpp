#include<iostream>
using namespace std;

class timeadd
{
    int hr;
    int min;
    int sec;
    public:
    void assign(int a,int b,int c)
    {
        hr=a;
        min=b;
        sec=c;
    }
    void show()
    {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    timeadd addition( timeadd t2)
    {
        timeadd t3;
        t3.sec=sec+t2.sec;
        t3.min=min+t2.min;
        t3.hr= hr+t2.hr;
        if(t3.sec >= 60)
        {
            t3.min++;
            t3.sec -= 60;
        }
        if(t3.min >=60)
        {
            t3.hr++;
            t3.min -= 60;
        }
        return t3;
        
    }

};

int main()
{
    timeadd t1,t2,t3;
    t1.assign(12,45,35);
    t2.assign(8,34,35);
    t1.show();
    t2.show();
    t3=t1.addition(t2);
    t3.show();


    return 0;
}