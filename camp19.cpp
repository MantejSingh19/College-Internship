#include<iostream>
#include<deque>
using namespace std;
int main()
{

    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.pop_backss/w();
    for(int i:d)
    {
        cout<<i<<endl;
    }
}
