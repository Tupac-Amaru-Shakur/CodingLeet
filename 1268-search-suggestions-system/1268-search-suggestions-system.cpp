class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        map<string,vector<string>>mp;
        sort(begin(products),end(products));
        
        for(int i=1;i<=size(searchWord);i++)
        {
            vector<string> temp;
            string help=searchWord.substr(0,i);
            for(auto &p:products)
            {
                if(help==p.substr(0,i))
                {
                  
                    temp.push_back(p);
                }
                if(temp.size()==3)
                    break;
                
            }
            mp[help]=temp;
            
            
        }
        
        vector<vector<string>>ans;
        
        for(auto &i:mp)
        {
            ans.push_back(i.second);
        }
        
        return ans;
        
    }
};


// class Solution {
// public:
//     vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord) {
//         int n = products.size();
//         sort(products.begin(), products.end());  // Sort by increasing lexicographically order of products
//         vector<vector<string>> ans;
//         int startIdx = 0, endIdx = n - 1;
//         for (int i = 0; i < searchWord.length(); i++) {
//             while (startIdx <= endIdx && (i >= products[startIdx].size() || products[startIdx][i] < searchWord[i]))
//                 startIdx++;
//             while (startIdx <= endIdx && (i >= products[endIdx].size() || products[endIdx][i] > searchWord[i]))
//                 endIdx--;

//             ans.push_back({});
//             for (int j = startIdx; j < min(startIdx + 3, endIdx + 1); ++j) {
//                 ans.back().push_back(products[j]);
//             }
//         }
//         return ans;
//     }
// };