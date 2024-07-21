#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"capacity"<<v.capacity()<<endl;
    for(int i=0;i<4;i++)
    {
        int emp;
        cout<<"enter inputs"<<endl;
        cin>>emp;
        v.push_back(emp);
        cout<<"capacity"<<v.capacity()<<endl;
    }
    cout<<"size"<<v.size()<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<v.at(i)<<endl;
    }
    v.pop_back();
    for(int i=0;i<3;i++)
    {
        cout<<v.at(i)<<endl;
    }
    cout<<"size"<<v.size()<<endl;
    v.clear();
    cout<<"size"<<v.size()<<endl;
    vector <int> vrr (5,1);
    for(int i:vrr)
    {
        cout<<i<<endl;
    }




   /*array<int,4> arr={6,5,3,8};
   sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++)
    {
        cout<<arr.at(i)<<endl;
    }*/
}
