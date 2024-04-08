#include<iostream>
using namespace std;
template<class t>
class largesmall
{
   t a,b,c;
   public:
   void assign(t x,t y,t z)
   {
        a=x;
        b=y;
        c=z;
   }
   void show()
   {
    if(a>b && a>c)
    cout<<" a is big"<<endl;
   else if(b>c && b>a)
   cout<<"b is big"<<endl;
   else
   cout<<"c is big"<<endl;
    }



};
int main()
{
    largesmall<int> A;
    largesmall<float> B;
    largesmall<char> C;
    A.assign(12,13,15);
    A.show();
    B.assign('A','C','T');
    B.show();
    C.assign(12.23,23.45,11.45);
    C.show();


    return 0;
}
