// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
        
        int c=N;
        vector<int>bin;
        // int bin=0;
        while(c!=0){
            int t=c%2;
            // bin=bin*10+t;
            bin.push_back(t);
            c/=2;
        }
        vector<int>ans;
        for(auto &i:bin){
            if(i==0){
                ans.push_back(1);
            }
            else{
                ans.push_back(i);
            }
                        // cout<<i<<endl;


}
        int s=0;
        int k=0;
        for(int i=ans.size()-1;i>=0;i--){
          s+=pow(2,k)*ans[i];  k++;
        }
        // cout<<bin<<endl;
        // int copy=bin;
       
        // while(copy!=0){
        //     int d=copy%10;
            
        //     if(d==0){
        //         newNum=pow(10,i)*1+newNum;
        //         // newNum=newNum*10+1;
        //         i++;
        //     }
        //     else{
        //         newNum=pow(10,i)*d+newNum;
        //         i++;
        //     }
        //     copy/=10;
        // }
        // int diff= newNum-N;
        return {abs(N-s),s};
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends