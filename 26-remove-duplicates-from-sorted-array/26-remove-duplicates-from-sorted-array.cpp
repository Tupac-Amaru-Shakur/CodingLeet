class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(auto &i:nums){
            s.insert(i);
        }
        // map<int,int>mp()
vector<int>supp;
        for(auto&i:s){
            supp.push_back(i);
        }
        int k=0;
        reverse(supp.begin(),supp.end());
        for(auto &i:supp){
            cout<<i<<endl;
        }
        for(auto &i:supp){
            nums.insert(nums.begin()+0,i);
        }
        
    return supp.size();
    }
};