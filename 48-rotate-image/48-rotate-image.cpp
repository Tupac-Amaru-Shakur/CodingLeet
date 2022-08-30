class Solution
{
    public:
        void rotate(vector<vector < int>> &matrix)
        {

           	//         int m=size(matrix);
           	//         int n=matrix[0].size();

           	//         vector<vector < int>>ans;

           	//         for(int i=0;i < m;i++)
           	//         {
           	//             vector < int>temp;
           	//             for(int j=m-1;j>=0;j--)
           	//             {
           	//                 temp.push_back(matrix[j][i]);

           	//             }
           	//             ans.push_back(temp);
           	//         }
           	//    	// return ans;
           	//         matrix=ans;
            int start=0,end = matrix.size()-1;
            int m=size(matrix);

            while (start <= end)
            {
                swap(matrix[start], matrix[end]);
                start++;
                end--;
            }
            
            for(int i=0;i<m;i++)
            {
                for(int j=i+1;j<m;j++)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            
            
        }
};