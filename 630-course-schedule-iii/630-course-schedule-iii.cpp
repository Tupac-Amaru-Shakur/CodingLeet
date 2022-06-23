class Solution {
public:
    static bool sortbysec(const pair<int,int>&a, const pair<int,int>&b){
        return (a.second<b.second);
        
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        vector<pair<int,int>>vect;
//         for(int i=0;i<courses.size();i++)
//         {
//             vect.push_back(make_pair(courses[i][0],courses[i][1]));
            
//             sort(vect.begin(),vect.end(),sortbysec);
//         }
        sort(courses.begin(), courses.end(), [](const vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        // vect=courses;
        
        int ans=0;
        int tot=0;
//         for(int i=0;i<vect.size();i++)
//         {
//             // cout<<vect[i].first<<" "<<vect[i].second<<endl;
//             tot+=vect[i].first;
//             if(tot<=vect[i].second){
//                 ans++;
//             }
//         }
        
        priority_queue<int> q;
        for(auto &i:courses){
            tot+=i[0];
            q.push(i[0]);
            if(tot>i[1]){
                tot-=q.top();
                q.pop();
            }
        }
        
        
        return q.size();
    }
};