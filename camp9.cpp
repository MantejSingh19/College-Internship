#include<iostream>
using namespace std;
void selection(int arr[],int n)
{


    for(int i=0;i<n;i++)
    {
        int minn=INT_MAX;

        for(int j=i;j<n;j++)
        {
            if(arr[j]<minn)
            {
                minn=arr[j];
            }
        }
        int x;
        for(x=0;x<n;x++)
        {
            if(arr[x]==minn)
            break;
        }
        arr[x]=arr[i];
        arr[i]=minn;
    }

    }
            void display(int arr[],int n)
        {
            for(int i=0;i<n;i++)
           {
               cout<<arr[i]<<endl;
           }
        }

int main()
{
    int arr[5]={3,9,6,4,8};
    int n=5;
    selection(arr,n);
    display(arr,n);


}
