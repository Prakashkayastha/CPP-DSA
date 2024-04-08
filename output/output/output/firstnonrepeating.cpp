#include<iostream>
using namespace std;
#include<queue>
#include<string.h>
#include<map>
class solution
{
    public:
    string firstnonrepeating(string str)
    {
        map<char,int>m;
        string ans="";
        queue<char>q;

        for(int i=0;i<str.length();i++)
        {
            char ch=str[i];
            q.push(ch);
            m[ch]++;

            while(!q.empty())
            {
                if(m[q.front()] > 1)
                q.pop();
                else 
                {
                    ans.push_back(q.front());
                    break;
                }

            }
            if(q.empty())
            ans.push_back('#');
        }
        return ans;
    }



};
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        solution obj;
        string ans=obj.firstnonrepeating(str);
        cout<<ans<<"\n";
    }




    return 0;
}