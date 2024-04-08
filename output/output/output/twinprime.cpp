#include<iostream>
using namespace std;
class solution
{
    private:
    int n;
    public:
    void findprime(int a)
    {
        n=a;
        int i,j,k=0;
        int arr[10];
        for( i=1;i<=n;i++)
        {
            int num=i;
            for(j=2;j<num;j++)
            {
                if(num%j==0)
                break;
            }
            if(num==j)
            arr[k++]=num;
        }
        
        
        for(i=0;i<k;i++)
        {
            for(j=i+1;j<k;j++)
            {
                if(arr[j]-arr[i]==2)
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
        
    }
    
    
    

};

int main()
{
   
    int n=20;
    solution obj;
    obj.findprime(n);
   
   

    return 0;
}