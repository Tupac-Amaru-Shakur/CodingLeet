class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        vector<int> diff;
        priority_queue<int>pq;
        for(int i=0;i<heights.size()-1;i++){
            if(heights[i]<heights[i+1]){
                // diff.push_back(0);
                int ans=heights[i+1]-heights[i];
                pq.push(-ans);
                
            }
            if(pq.size()>ladders){
                bricks+=pq.top();
                pq.pop();
            }
            if(bricks<0){
                return i;
            }
        }
        return heights.size()-1;
        
        
    }
};