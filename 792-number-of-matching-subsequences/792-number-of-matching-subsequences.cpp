class Solution {
public:
    bool calc_disp(string s1,string s2,int m,int n){
        int j=0;
        for(int i=0;i<m && j<n;i++){
            if(s1[i]==s2[j])j++;
        }
        return j==n;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
//         map<char,int> mp;
//         for(int i=0;i<s.size();i++){
//             mp[s[i]]=i;
//         }
        
//         int c=0;
//         for (int i=0;i<words.size();i++){
//             string str=words[i];
//             int l=0;
//             for(int j=1;j<str.size();j++){
//                 if(mp[str[i-1]]<mp[str[i]]){
//                     l++;
//                 }
//             }
//             if(l==str.size()){
//                 c++;
//             }
//         }
//         return c;
        
        int c=0;
        
        map<string,int> mp;
        for(auto x:words){
            if(mp.find(x)!=mp.end()){
                if(mp[x]==true){
                    c++;
                    
                }
                continue;
            }
            mp[x]=calc_disp(s,x,s.size(),x.size());
            c+=(mp[x]==true);
        }
        return c;
    }
};