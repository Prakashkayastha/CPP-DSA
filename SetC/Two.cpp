#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int checkpresent(string s,string str)
{
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<str.length();j++)
        {
            if(s[i] == str[j])
            count++;
        }
    }
    if(count == s.length())
    return 1;
    else 
    return 0;
}
int main()
{
    vector<string>v={"ad","bd","aaab","baa","badab"};
    string str="ab";
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        int a=checkpresent(v[i],str);
        count += a;
    }
    cout<<count;



    return 0;
}