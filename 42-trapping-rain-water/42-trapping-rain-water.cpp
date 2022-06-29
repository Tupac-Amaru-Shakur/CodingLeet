
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int l = 0, r = height.size() - 1;
        int ans = 0;
        int mL = 0, mR = 0;

        while (l <= r)
        {
            if (height[l] < height[r])
            {
                if (height[l] > mL)
                {
                    mL = height[l];
                }
                else
                {
                    ans += mL - height[l];
                }
                l++;
            }
            else
            {
                if (height[r] > mR)
                {
                    mR = height[r];
                }
                else
                {
                    ans += mR - height[r];
                }
                r--;
            }
        }

        return ans;
    }
};