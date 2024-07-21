#include<iostream>
using namespace std;

void bubble(int arr[],int n)
{
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
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
    bubble(arr,n);
    display(arr,n);


}
