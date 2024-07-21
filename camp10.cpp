#include<iostream>
#include<string>
using namespace std;
int main()
{
    string stringg ="HELLO,ORLD";
    string substrr="WORLD";
    size_t found= stringg.find(substrr);
cout<<found;
cout<<string::npos;
   if(found !=string::npos)
   {
       cout<<"yesss";
   }
   else{
    cout<<"noo";
   }

}
