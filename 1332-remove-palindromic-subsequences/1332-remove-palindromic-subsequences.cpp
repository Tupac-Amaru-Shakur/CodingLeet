class Solution {
public:
//     bool isPalin(string str)
//     {
        
//     }
    int removePalindromeSub(string s) {
        int i=0;
        int j=size(s)-1;
        while(i<j)
        {
            if(s[i]!=s[j])
                return 2;
            i++;j--;
        }
        return 1;
    }
};