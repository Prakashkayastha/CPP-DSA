#include<iostream>
using namespace std;
class complex
{
    int real;
    int  img;
    public:
    void assign(int a,int b)
    {
        real=a;
        img=b;
    }
    void show()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
     complex addition(complex B)
    {
        complex c;
        c.real=real+B.real;
        c.img=img+B.img;
        return c;
    }



};
int main()
{
    complex A,B,C;
    A.assign(3,4);
    B.assign(4,5);
    cout<<"The first cimplex number is: "<<endl;
    A.show();
    cout<<"The second cimplex number is: "<<endl;
    B.show();
    C=A.addition(B);
    cout<<"The resultant complex number is: "<<endl;
    C.show();




    return 0;
}