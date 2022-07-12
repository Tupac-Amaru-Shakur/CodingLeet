class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1=haystack.size();
        int l2=needle.size();
        if(haystack==needle){
            return 0;
        }
        
        for(int i=0;i<l1;i++){
            cout<<haystack.substr(i,l2)<<endl;
            if (needle==haystack.substr(i,l2)){
                return i;
            }
        }
        return -1;
    }
};