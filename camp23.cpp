#include<bits/stdc++.h>
using namespace std;
int main()
{
    int prices[5]={3,4,1,7,8};
    int buy=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
            }
            else if(prices[i]-buy>profit)
            {
                profit=prices[i]-buy;
            }
            cout<<profit;
        }
}
