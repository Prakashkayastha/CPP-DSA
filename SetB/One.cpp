#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool checkperfect(int target)
{
    int sum=0;
    for(int i=1;i<=target/2;i++)
    {
        if(target%i == 0)
        sum += i;
    }

    if(sum == target)
    return true;
    else 
    return false;
}
int main()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;
    if(checkperfect(number))
    {
        cout<<"Enter number is a perfect number";
    }
    else 
    cout<<"Enter number is not a aperfect number";

    return 0;
}