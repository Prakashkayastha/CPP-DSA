#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int checkword(vector<char>&ch)
{
    
    int hcount=0,pcount=0;
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i] == '-')
        hcount++;
        else if(ch[i] == '!'|| ch[i] == '.'||ch[i]==',') 
        pcount++; 
        
    }
    if(hcount>1 || pcount>1)
    return 0;
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i]>=48 && ch[i]<=57)
        return 0;
    }
   if(ch[0] == '-' || ch[ch.size()-1] == '-')
   return 0;
   if(pcount == 1)
   {
    if(ch[ch.size()-1]=='!'|| ch[ch.size()-1]=='.' || ch[ch.size()-1]==',')
    return 1;
    else 
    return 0;
   }
   return 1;

}
int main()
{
    string str={"cat and dog"};
    str.push_back(32);
    vector<char>ch;
    int ans=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] != 32)
        {
            ch.push_back(str[i]);
        }
        else if(str[i] == 32)
        {
            int res= checkword(ch);
            ans+=res;
            ch.clear();
        }
        
    }
    cout<<ans;



    return 0;
}