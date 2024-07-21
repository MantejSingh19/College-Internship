#include<iostream>
using namespace std;
    int converP2RS()
    {
       int p;
       cin>>p;
       cout<<"RS-"<<p*106.98<<endl;

    }
    int converRS2P()
    {
        int rs;
       cin>>rs;
       cout<<"P-"<<rs/106.98<<endl;
    }
     int converRS2US()
    {
        int rs;
       cin>>rs;
       cout<<"US-"<<rs/83.53<<endl;
    }
    int converUS2RS()
    {
        int us;
       cin>>us;
       cout<<"RS-"<<us*83.53<<endl;
    }

    int converRS2YUAN()
    {
        int rs;
       cin>>rs;
       cout<<"YUAN-"<<rs/11.48<<endl;
    }
     int converYUAN2RS()
    {
        int yuan;
       cin>>yuan;
       cout<<"RS-"<<yuan*11.48<<endl;
    }

int main()
{
   converP2RS();
   converRS2P();
   converRS2US();
   converUS2RS();
   converRS2YUAN();
   converYUAN2RS();


}
