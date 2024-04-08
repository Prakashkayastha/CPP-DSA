#include<iostream>
using namespace std;
long fact(int a)
{
    if(a<0)throw a;
    long ans=1;
    for(int i=1;i<=a;i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int num;
    try
    {
        cout<<"Enter a number for factorial:";
        cin>>num;
        long res=fact(num);
        cout<<"Factorial of"<<num<<"="<<res;
    }
    catch(...)
    {
        cout<<"Factorial not possible";

    }
}