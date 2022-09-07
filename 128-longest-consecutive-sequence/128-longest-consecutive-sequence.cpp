class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {
           	// if (!size(nums)) return 0;
           	// sort(begin(nums), end(nums));
           	// int longest = 0, cur_longest = 1;
           	// for (int i = 1; i < size(nums); i++)
           	//     if (nums[i] == nums[i - 1]) continue;
           	//     else if (nums[i] == nums[i - 1] + 1) cur_longest++;	// consecutive element - update current streak length
           	// else longest = max(longest, cur_longest), cur_longest = 1;	// reset current streak length
           	// return max(longest, cur_longest);

            unordered_set<int> s;
            for (auto i: nums)
            {
                s.insert(i);
            }
            int res=0;
            
            for(int i=0;i<nums.size();i++)
            {
                if(s.find(nums[i]-1)!=s.end()){
                    continue;
                }
                else{
                    int curr=nums[i];
                    int c=0;
                    
                    while(s.find(curr)!=s.end())
                    {
                        c++;curr++;
                    }
                    
                    res=max(res,c);
                }
                
            }
            return res;
        }
};