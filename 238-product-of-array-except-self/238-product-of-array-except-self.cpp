#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     std::ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     return 0;
// }

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        // int prod = 1;
        // vector<int> submit;
        // // int count = (nums.begin(), nums.end(), 0);
        // int count=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0)
        //         count++;
        // }
        // if (count > 1)
        // {
        //     vector<int> final(nums.size());
        //     return final;
        // }
        // else if (count == 1)
        // {
        //     for (int i = 0; i < nums.size(); i++)
        //     {
        //         if (nums[i] != 0)
        //             prod *= nums[i];
        //     }
        //     for (int i = 0; i < nums.size(); i++)
        //     {
        //         if (nums[i] == 0)
        //         {
        //             submit.push_back(prod);
        //         }
        //         else
        //         {
        //             submit.push_back(0);
        //         }
        //     }
        //     return submit;
        // }
        // else if (count == 0)
        // {
        //     for (int i = 0; i < nums.size(); i++)
        //     {
        //         // if (nums[i] == 0)
        //         prod *= nums[i];
        //     }
        //     for (int i = 0; i < nums.size(); i++)
        //     {
        //         // if (nums[i] == 0)
        //         int term = prod / nums[i];
        //         submit.push_back(term);
        //     }
        // }
        // return submit;
        
        int n=nums.size();
        vector<int> ans(n,1);
        int pro1=nums[0];
        for(int i=1;i<n;i++){
            
            ans[i]=pro1;
            pro1*=nums[i];
        }
        
        
        
        int post=nums[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i]*=post;
            post*=nums[i];
        }
        
        return ans;
    }
};