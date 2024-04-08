#include<iostream>
using namespace std;
class complex
{
    int real;
    float img;

    public:
    void getdata()
    {
        cout<<"Enter real and imaginary part:";
        cin>>real>>img;
    }
    void show()
    {
        cout<<real<<"+"<<img<<"i";
    }
    void addition(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }



};
int main()
{
    complex c,c1,c2;
    c1.getdata();
    c2.getdata();
    c.addition(c1, c2);
    c.show();


    return 0;
}