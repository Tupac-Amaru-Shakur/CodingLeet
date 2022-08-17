class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mcodes={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int n=words.size();
        unordered_set<string>us;
        
        for(auto &i:words){
            string t="";
            
            for(auto &j:i){
                t+=mcodes[j-'a'];
            }
            us.insert(t);
        }
        
        return us.size();
        
    }
};