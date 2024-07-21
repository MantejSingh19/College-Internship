#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    q.push("hii");
    q.push("bye");
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    for(int i=0;i<q.size();i++)
    {
        cout<<q.front()<<endl;
        q.pop();
    }




}
