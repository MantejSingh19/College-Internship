vector<int> v;
        int mul=1;
         int n=0;
        for(int j=0;j<nums.size();j++)
        {
            mul=1;
       for(int i=0;i<nums.size();i++)
       {
        if(n==i)
        {
            continue;
        }
        mul=mul*nums[i];

        }
        v.push_back(mul);
        n++;
    }
    return v;






    class Solution {

public:

  vector<int> productExceptSelf(vector<int>& nums) {

    int n=nums.size();

    vector<int> answer(n,0);

    int pro1=1,flag=0;

    int c=0;

    for(int i=0;i<n;i++)

    {

      if(nums[i]==0)

      c++;

      if(nums[i]!=0)

      pro1=pro1*nums[i];

      else

      flag=1;

    }

    for(int i=0;i<n;i++)

    {

      if(c<2){

      if(nums[i]!=0){

        if(flag==1)

          answer[i]=0;

        else

         answer[i]=pro1/nums[i];

      }

      else

        if(flag==1)

          answer[i]=pro1;

        else

          answer[i]=0;

      }

    }

    return answer;

  }

};
