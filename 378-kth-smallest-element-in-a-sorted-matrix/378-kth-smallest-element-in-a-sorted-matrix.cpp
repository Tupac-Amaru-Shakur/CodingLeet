class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n=matrix.size();
        vector<int>arr;
        int t=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                t++;
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        
        return arr[k-1];
    }
};