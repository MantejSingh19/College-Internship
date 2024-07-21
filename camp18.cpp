#include<iostream>
using namespace std;
int main()
{
    int arr[6]={3,1,4,7,1,1};
    int flag=0;
    int sum=0;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
    {
         for(int k=j+1;k<6;k++)
    {
        if(arr[i]+arr[j]+arr[k]==6)
        {
            cout<<i<<" "<<j<<" "<<k;
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        break;
    }
    }
    if(flag==1)
    {
        break;
    }
    }
}
