#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool check(string str1,string str2)
{
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i] != str2[i])
        return false;
    }
    return true;
}
int main()
{
    vector<string>v1={"abc","d","defg"};
    vector<string>v2={"abcddefg"};
    string str1,str2;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[i].size();j++)
        {
            str1.push_back(v1[i][j]);
        }
    }
    for(int i=0;i<v2.size();i++)
    {
        for(int j=0;j<v2[i].size();j++)
        {
            str2.push_back(v2[i][j]);
        }
    }
   if(check(str1,str2))
   cout<<"True";
   else
   cout<<"False";



    return 0;
}