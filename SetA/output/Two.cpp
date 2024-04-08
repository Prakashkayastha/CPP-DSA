#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void mergearray(int arr[],int s,int e)
{
  int mid=(s+e)/2;
  int len1=mid-s+1;
  int len2=e-mid;
  int *first=new int[len1];
  int *second=new int[len2];
  //Copy the values
  int mainarrayindex=s;
  for(int i=0;i<len1;i++)
  {
    first[i]=arr[mainarrayindex++];
  }
  mainarrayindex=mid+1;
  for(int i=0;i<len2;i++)
  {
    second[i]=arr[mainarrayindex++];
  }

  //Now sort and add them
  int index1=0,index2=0;
  mainarrayindex=s;
  while(index1<len1 && index2 < len2)
  {
    if(first[index1] < second[index2])
    arr[mainarrayindex++]=first[index1++];
    else
    arr[mainarrayindex++]=second[index2++];

  }
  while(index1 < len1)
  {
    arr[mainarrayindex++]=first[index1++];
  }
  while(index2 < len2)
  {
    arr[mainarrayindex++]=second[index2++];
  }

}
void mergesort(int arr[],int s,int e)
{
  if(s>=e)
  return ;
  int mid=(s+e)/2;
  //Sort left part
  mergesort(arr,s,mid);
  //sort right part
  mergesort(arr,mid+1,e);
  //Now merge the array
  mergearray(arr,s,e);
}
int main() {
  int arr[7]={23,12,43,21,28,16,31};
  mergesort(arr,0,7);
  for(int i=0;i<7;i++)
  {
    cout<<arr[i]<<" ";
  }
}