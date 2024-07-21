#include<iostream>
#include<array>
using namespace std;
int main()
{
   array<int,5> arr={1,6,3,8,5};
   cout<<arr.size()<<endl;
   for(int i=0;i<arr.size();i++)
   {
       cout<<arr[i]<<endl;
   }
   cout<<"ele at index"<<arr.at(2)<<endl;
   bool truf=arr.empty();
   cout<<"true or false"<<truf<<endl;
   bool emp=arr.empty();
   cout<<"is array empty"<<emp<<endl;
   cout<<"first ele"<<arr.front()<<endl;
   cout<<"last ele"<<arr.back();

}
