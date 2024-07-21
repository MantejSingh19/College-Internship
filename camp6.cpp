#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int sum=6;
    int countt=0;
int arr[n]={1,2,3,4,3,2,1};
for(int i=0;i<n;i++)
{

}

    for(int i=0;i<n;i++)
    {
        if(i+2==n)
        {
            break;
        }

       if(arr[i]+arr[i+1]+arr[i+2]==sum)
       {
         cout<<"sum found at"<<i<<","<<i+1<<","<<i+2<<endl;
         countt++;

       }
    }
    if(countt==0)
    {
        cout<<"sum not found"<<endl;

    }
    else
{
        cout<<countt;
        }



}
