#include <iostream>
using namespace std;
class BankAccount{
    private:
    string accountHolderName;
    int Balance;
    public:

    int deposit;
     int NewBalance;
    int withdraw;
      BankAccount(){
           cout<<"Enter account holder name"<<endl;
        cin>>accountHolderName;
      }
    void depositing()
    {
        cout<<"Enter the total Balance"<<endl;
        cin>>Balance;
    cout<<"Enter the amount to deposit."<<endl;
    cin>>deposit;
    }
    void withdrawing()
    {
        cout<<"Enter the amount to withdraw"<<endl;
        cin>>withdraw;
        NewBalance=(Balance+deposit)-withdraw;

    }
    void display()
    {
    cout<<"Account Holder Name: "<<accountHolderName<<endl;
    cout<<"Old Balance: "<<Balance<<endl;
    cout<<"New Balance: "<<NewBalance<<endl;

    }
};
int main() {
    BankAccount bank;
    bank.depositing();
    bank.withdrawing();
    bank.display();
   return 0;
}



