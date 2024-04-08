#include<iostream>
using namespace std;
#include<stack>
class solution
{
    private:
    bool knows(int mat[][3],int a,int b)
    {
        if(mat[a][b]==1)
        return true;
        else
        return false;
    }
    public:
    int celebrity(int mat[][3],int n)
    {
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }

        while(s.size() > 1)
        {
            int a=s.top();
            s.pop();

            int b=s.top();
            s.pop();

            if(knows(mat,a,b))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int ans=s.top();



        int zerocount=0;
        for(int i=0;i<n;i++)
        {
            if(mat[ans][i]==0)
            zerocount++;
        }

        if(zerocount!=n)
        return -1;



        int onecount=0;
        for(int i=0;i<n;i++)
        {
            if(mat[i][ans]==1)
            onecount++;
        }
        if(onecount!=n-1)
        return -1;

        return ans;
    }


};

int main()
{
    int mat[3][3];
    int n=3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
    solution obj;
    cout<<obj.celebrity(mat,n);


    return 0;
}