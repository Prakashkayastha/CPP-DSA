#include<iostream>
using namespace std;
int binarysearch(int n)
{
   int s=0;
   int e=n;
   int mid=s+(e-s)/2;
   
   while(s<=e)
   {
      int r=mid*mid;
      if(r==n)
      {
         return mid;
      }
      else if(r>n)
      e=mid-1;
      else
      s=mid+1;
      mid=s+(e-s)/2;
   }
   
}
int main()
{
   int number;
   cout<<"Enter the number:";
   cin>>number;

   int ans=binarysearch(number);
   cout<<"Square root="<<ans<<endl;
}