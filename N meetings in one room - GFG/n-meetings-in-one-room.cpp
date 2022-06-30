// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    static bool comparator(pair<int,int>&a, pair<int,int> &b){
        return (a.second<b.second);
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        // int c=1;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n-i-1;j++){
        //         if(end[j]>end[j+1]){
        //             int t1=end[j];
        //             end[j]=end[j+1];
        //             end[j+1]=t1;
                    
        //             int t2=start[j];
        //             start[j]=start[j+1];
        //             start[j+1]=t2;
        //         }
        //     }
            
        // }
        // for(int i=0;i<n;i++){
        //     cout<<start[i]<<" "<<end[i]<<endl;
        // }
        // int st=start[0];
        // int et=end[0];
        // for(int i=1;i<n;i++){
        //     if(start[i]>=et){
        //         c++;
        //         st=start[i];
        //         et=end[i];
        //     }
        // }
        // return c;
        
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++)a.push_back({end[i],start[i]});
        sort(a.begin(),a.end());
        int cnt=1;
        int endt=a[0].first;
        for(int i=1;i<n;i++){
            if(a[i].second>endt){
                cnt++;
                endt=a[i].first;
            }
        }
        return cnt;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends