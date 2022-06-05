class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int it=1;
        int res=0;
        int len=size(arr);
        for(int i=0;i<len;i++)
        {
            int sum=0;
            for(int j=i;j<len;j++)
            {
                sum+=arr[j];
                if((i-j)%2==0)
                    res+=sum;
            }
            
        }
        return res;
    }
};