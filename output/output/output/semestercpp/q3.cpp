#include<iostream>
using namespace std;
class mat
{
    int a[10][10];
    int r,c;
    public:
    void assign(int m,int n)
    {
         r=m;
        c=n;
    }
    void read()
    {
       
        cout<<"Enter matrix elements:";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }

    }
     mat operator +(mat);
    void show()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }


};
mat mat::operator +(mat obj)
{
    mat res;
    for(int i=0;i<obj.r;i++)
    {
        for(int j=0;j<obj.c;j++)
        {
            res.a[i][j]=a[i][j]+obj.a[i][j];
        }
    }
    return res;
}
int main()
{
    mat obj1,obj2,res;
    obj1.assign(2,3);
    obj2.assign(2,3);
    obj1.read();
    obj2.read();
    res=obj1+obj2;
    res.show();


    return 0;
}