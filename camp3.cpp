#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<a+b;
}
void sub(int a,int b)
{
    cout<<a-b;
}

void rem(int a,int b)
{
    cout<<a%b;
}
void add(int a,int b,int c)
{
    cout<<a+b+c;
}
int main()
{
    int a{2};
    int b{4};
    int c=9;
    add(a,b,c);
}
//Function overloading- Having more than one function with same name
//but with different parameters;

//Polymorphism-Existing in many forms;

//Compile time polymorphism-Compile time polymorphism means binding is occuring at
//compile time
//runtime time polymorphism-Run time polymorphism where at run time we came to
//know which method is going to invoke
