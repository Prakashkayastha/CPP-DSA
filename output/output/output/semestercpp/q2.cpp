#include<iostream>
using namespace std;
class numbers
{
     virtual void read()=0;
     virtual void show()=0;

};
class sum:public numbers
{
    float a,b,c;
    public:
    void read()
    {
        cout<<"Enter three numbers:";
        cin>>a>>b>>c;
    }
    void show()
    {
        cout<<"Sum="<<a+b+c<<endl;
    }

};
class product:public numbers
{
    float a,b,c;
    public:
    void read()
    {
        cout<<"Enter three numbers:";
        cin>>a>>b>>c;
    }
    void show()
    {
        cout<<"Product="<<a*b*c<<endl;
    }
    

};
int main()
{
    sum obj1;
    product obj2;
    obj1.read();
    obj1.show();
    obj2.read();
    obj2.show();


    return 0;
}