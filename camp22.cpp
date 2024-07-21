#include<bits/stdc++.h>
using namespace std;
int main()
{

   stack<int> s;
    int ans;
cout<<"Enter which case you want to run"<<endl;
cout<<"Case 1:Size of stack"<<endl;
cout<<"Case 2:Insert elements into stack"<<endl;
cout<<"Case 3:Pop elements out of stack"<<endl;
cout<<"Case 4:Display top element of stack"<<endl;
cout<<"Case 5:Exit"<<endl;

    for(int h=0;h<5;h++)
    {
        cin>>ans;

    switch(ans)
    {
    case 1:
        {
            cout<<"Size- "<<s.size()<<endl;
            break;
        }
        case 2:
        {

            cout<<"Enter how many ele you want to insert"<<endl;
            int n;
            cin>>n;
            for(int i=0;i<n;i++)
            {
                int temp;
                cout<<"Enter ele"<<endl;
                cin>>temp;
                s.push(temp);
            }
            break;
        }
        case 3:
        {
            cout<<"Poped ele out of the stack"<<endl;
            s.pop();
            break;
        }


     case 4:
        {
            cout<<"Top ele is- "<<s.top()<<endl;
            break;

        }
     case 5:
        exit(0);
    }
    cout<<endl;
    cout<<"Enter next input"<<endl;
    }
}
