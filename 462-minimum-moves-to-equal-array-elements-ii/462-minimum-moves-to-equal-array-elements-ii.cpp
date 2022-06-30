class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // sort(begin(nums),end(nums));
//         if(nums.size()==2){
//             return abs(nums[0]-nums[1]);
//         }
        
        int n=nums.size();
        int median=0;
        int medValue=0;
                nth_element(nums.begin(), nums.begin()+(n/2), nums.end()); //Fixing ths median element
        int med=nums[n/2];
        int s=0;
        for(auto &i:nums){
            s+=abs(i-med);
        }

//         if(n%2!=0){
//             median=(n-1)/2;
//             cout<<median<<endl;
//             medValue=nums[median];
//         }
//         else{
//             int med1=(n/2);
//             int med2=med1+1;
//             cout<<med1<<" "<<med2<<endl;
//             medValue=(nums[med1]+nums[med2])/2;
            
//         }
//         cout<<medValue<<endl;
//         int s=0;
//         for(auto &i:nums){
//             s=s+(abs(medValue-i));
//         }
        return s;
    }
};