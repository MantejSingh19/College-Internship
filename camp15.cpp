#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,5> arr={1,3,3,3,3};
    int countt=0;
    for(int i=0;i<arr.size();i++)
    {
        if((arr.at(i))==3)
        {
            countt++;
        }
    }
    cout<<countt<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<"count for "<<arr.at(i)<<"-";
        cout<<count(arr.begin(),arr.end(),arr.at(i))<<endl;
    }


}
