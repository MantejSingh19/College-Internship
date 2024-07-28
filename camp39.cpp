#include <iostream>
using namespace std;
int main() {
    //int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n;
    int m;
    int sum=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the size of sub-array:";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)

        cin>>arr[i][j];
    }
    cout<<"The array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0)
            {
                sum=sum+arr[i][j];

            }

            cout<<arr[i][j]<<" ";
        }

        cout<<endl;

    }
     cout<<"The sum is:"<<sum;

    return 0;
}
