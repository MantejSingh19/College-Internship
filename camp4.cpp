#include<iostream>
using namespace std;
int main()
{
    float classes_held;
    cin>>classes_held;
    float classes_attend;
    cin>>classes_attend;
    float percent=(classes_attend/classes_held)*100;
    cout<<"Percentage of classes attended- "<<(classes_attend/classes_held)*100<<"%"<<endl;
    if(percent>=75)
    {
        cout<<"Allowed";

    }
    else{
        cout<<"Not Allowed";
    }


}
