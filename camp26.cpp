#include<iostream>
using namespace std;
auto add=[](int a,int b){return a+b;};
int main()
{

    cout<<add(3,4);
}
auto addbyref=[&x,&y](int a)
{
    x=30;
    return x+y+a;

}
addbyref(5);jjjjjjjjjjj
