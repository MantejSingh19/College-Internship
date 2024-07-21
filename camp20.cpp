#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack<string> s;
   s.push("ajay");
   s.push("vajay");
   s.push("sajay");
   cout<<"top"<<s.top()<<endl;
   s.pop();
   cout<<s.top();
}
