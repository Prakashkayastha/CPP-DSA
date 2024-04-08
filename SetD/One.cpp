#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector<int>num={1,1,2,2,3};
    int arr[num.size()];
    for(int i=0;i<num.size();i++)
    {
        arr[i]=num[i];
    }
    vector<int>temp;
    for(int i=0;i<num.size();i++)
    {
        int a=num[i];
        temp.push_back(a);
    }
    vector<int>freq;
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i] == -1)
        continue;
        int count=1;
        for(int j=i+1;j<temp.size();j++)
        {
            if(temp[i] == temp[j] )
            {
                count++;
                temp[j]=-1;
            }
        }
        
        freq.push_back(count);
    }
    int n=num.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
               j--;
               n--;
            }
            
        }
    }
    
     int max=INT_MIN;
     cout<<endl;
   
     for(int i=0;i<freq.size();i++)
     {
        if(freq[i]>max)
        max=freq[i];
     }
     vector<int>res;
     for(int i=0;i<freq.size();i++)
     {
        if(freq[i] == max)
        res.push_back(num[i]);
     }
     sort(res.begin(),res.end());
     cout<<res.front();

    return 0;
}