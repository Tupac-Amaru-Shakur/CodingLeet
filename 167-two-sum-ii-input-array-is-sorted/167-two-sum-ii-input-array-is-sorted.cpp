class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=size(numbers)-1;
        while(i<j)
        {
            int s=numbers[i]+numbers[j];
            if(s==target)
            {
                return {i+1,j+1};
            }
            else if(s>target)
            {
                j--;
            }
            else if(s<target)
            {
                i++;
            }
        }
    
    return {};}
};