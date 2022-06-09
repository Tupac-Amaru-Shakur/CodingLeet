class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
//         int temp=0,c=0,sp=0;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             temp+=nums[i];
//             sp+=nums[i];
            
//             if(temp==k || sp==k)
//             {
//                 // temp=0;
//                 sp=0;
//                 c++;
//                 temp=nums[i];
//             }
//             else if(temp>k)
//             {
//                 sp=0;
//                 temp=nums[i];
//             }
//         }
//         return c;
        
        int cursum=0;
        int temp=0;
        map<int,int> mp;
        
        mp[0]++;
        for(int i=0;i<nums.size();i++)
        {
            cursum+=nums[i];
            temp+=mp[cursum-k];
            mp[cursum]++;
        }
        
        return temp;
        
    }
};