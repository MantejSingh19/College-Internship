#include<iostream>
#include<vector>
using namespace std;
int main()
//to find duplicate words in the given string
{
    vector<string>words={"Welcome","to","MIET","for","intern","to","intern","to"};
    string duplicate;
    vector<string>ans;
    int count=0;

    for(int i=0;i<words.size();i++)
    {
        for(int j=i+1;j<words.size();j++)
        {
            if(words[i]==words[j])
            {
                duplicate=words[i];


                ans.push_back(duplicate);

                duplicate.empty();
            }


        }

    }
    for(int k=0;k<ans.size();k++)
   {
    cout<<ans[k]<<endl;
   }
   int countt[1000]={0};
int cnt=0;
   for(int h=0;h<ans.size();h++)
   {

       for(int m=h+1;m<ans.size();m++)
       {
           if(ans[h]==ans[m] && ans[m]!="ch")
           {
               countt[cnt]++;
               ans[m]="ch";
               cnt++;
           }
       }

   }
   for(int i=0;i<;i++)
   {
       cout<<countt[i]<<endl;
   }

}
