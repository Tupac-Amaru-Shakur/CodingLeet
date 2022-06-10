class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[256]={0};
        int i=0;
        int j=0;
        int len=size(s);
        int max=0;
        while(i<len && j<len)
        {
            if(arr[s[j]]==0)
            {
                arr[s[j]]=1;j++;
                max=max>j-i?max:j-i;
            }else{
                arr[s[i]]=0;
                i++;
            }
        }
    return max;}
};