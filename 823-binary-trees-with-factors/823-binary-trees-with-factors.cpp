class Solution {
    
    typedef long long int ll;
    
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        ll ans=0;
        
        map<ll,ll>mp;
        
        ll MOD=pow(10,9)+7;
        ll n=arr.size();
        
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=1;
            
            for(int j=0;j<i;j++){
                
                if(arr[i]%arr[j]==0){
                 
                mp[arr[i]]+=(mp[arr[j]]*(mp[arr[i]/arr[j]]))%MOD;
                mp[arr[i]]%=MOD;   
                    
                }
            }
            
            ans=(ans+mp[arr[i]])%MOD;
        }
        
        return ans;
    }
};