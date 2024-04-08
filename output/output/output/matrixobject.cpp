#include<iostream>
using namespace std;

class matrixmul
{
    int x[10][10];
    int row,col;
    public:
    void getdata(int r,int c)
    {
        row=r;
        col=c;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>x[i][j];
            }
        }
    }
   
    matrixmul multiply(matrixmul m2)
    {
        matrixmul m3;
        m3.row=row;
        m3.col=col;
        int sum;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                sum=0;
                for(int k=0;k<col;k++)
                {
                    sum=sum+ x[i][k]*m2.x[k][j];
                }
                m3.x[i][j]=sum;

            }
        }
        return m3;


    }
     void show()
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
    }

};
int main()
{
    matrixmul m1,m2,m3;
    cout<<"Enter 1st matrix element";
    m1.getdata(3,3);
    cout<<"Enter 2nd matrix element";
    m2.getdata(3,3);
    cout<<endl<<"1st matrix is:"<<endl;
    m1.show();
    cout<<endl<<"2nd matrix is:"<<endl;
    m2.show();
    m3=m1.multiply(m2);
    cout<<endl<<"The resultant matrix is:"<<endl;
    m3.show();



    return 0;
}