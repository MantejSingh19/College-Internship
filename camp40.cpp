#include<iostream>
using namespace std;
int main()
{
    int j=0,z=7,k=0,m=7;
    for(int i=0;i<4N;i++)
    {
        while(k<3)
        {
            cout<<" ";
            k++;
        }
        while(m<8)
        {
           cout<<"*";
           m++;
        }
        j++;
        k=j;
        z-=2;
        m=z;

        cout<<endl;
    }
}
