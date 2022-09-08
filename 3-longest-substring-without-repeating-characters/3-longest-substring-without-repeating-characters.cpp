class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            // int arr[256] = { 0 };
            // int i = 0;
            // int j = 0;
            // int len = size(s);
            // int max = 0;
            // while (i < len && j < len)
            // {
            //     if (arr[s[j]] == 0)
            //     {
            //         arr[s[j]] = 1;
            //         j++;
            //         max = max > j - i ? max : j - i;
            //     }
            //     else
            //     {
            //         arr[s[i]] = 0;
            //         i++;
            //     }
            // }
            // return max;
            
            int n=s.size();
            int i=0;
            int j=0;
            int ans=0;
            unordered_set<char>ss;
            while(j<n){
                if(ss.find(s[j])==ss.end()){
                    ss.insert(s[j]);
                    ans=max(ans,j-i+1);
                    j++;
                }
                else{
                    ss.erase(s[i]);
                    i++;
                }
            }
            
            return ans;
        }
};