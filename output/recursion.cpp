#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    
    int fib3;
    int fib1=0;
    int fib2=1;
    cout<<fib1<<" "<<fib2;
    for(int i=3;i<=n;i++)
    {
        
         fib3=fib1+fib2;
        cout<<fib3<<" ";
        fib1=fib2;
        fib2=fib3;

       
      
    }


    return 0;
}