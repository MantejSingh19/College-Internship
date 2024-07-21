#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[8]={1,0,0,1,1,1,0,0};
   int countt=0;
  int onecount=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i+1]==8)
        {
            break;
        }
       if(arr[i]==1 && arr[i]==arr[i+1])
       {
           countt++;
           onecount=countt;
       }
       else{
        countt=0;
       }

    }
    cout<<"Number of one are "<<++onecount<<endl;

}
