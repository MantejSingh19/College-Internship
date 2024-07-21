#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={44,5,67,12,89,45};

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    int x;
    cin>>x;
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;

        if(x<arr[m])
        {
            r=m-1;
        }
        else if(x>arr[m])
        {
            l=m+1;
        }
       else if(x==arr[m])
        {
            cout<<m;
            break;
        }
        else{
            cout<<"not found";
        }

    }

}
