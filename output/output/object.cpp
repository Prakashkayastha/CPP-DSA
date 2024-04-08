/*Constructor in hirerchical inheritance*/
#include<iostream>
using namespace std;

class base
{
    int a;
    public:
    base(int x)
    {
        a=x;
        cout<<"Base a="<<a<<endl;
    }

};
class derived1:public base
{
    int b;
    public:
    derived1(int x,int y):base(x)
    {
        b=x;
        cout<<"Derived1 b="<<b<<endl;
    }
};
class derived2:public base
{
    int c;
    public:
    derived2(int p,int q):base(q)
    {
        c=q;
        cout<<"Derived2 c="<<c<<endl;
    }


};
int main()
{
   
   
     derived1 obj1(10,15);
     derived2 obj2(11,22);


    return 0;
}