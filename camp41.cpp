#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{10,50,20},
                   {1,2,3},
                   {9,2,3}};
int sum=0;
int m=2,n=0;
int k=0;
    for(int i=0;i<3;i++)
    {
        k=0;
       while(k<1)
       {
           sum=sum+arr[n][m];
           k++;
       }
       n++;
       m--;
    }
    cout<<"sum of first row is:"<<endl<<sum;
}
