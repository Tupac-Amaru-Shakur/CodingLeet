class Solution {
public:
    string revs(string x)
    {
        for(int i=0,j=x.size()-1;i<=j;i++,j--)
        {
            swap(x[i],x[j]);
        }
        return x;

    }
    string reverseWords(string s) {
        s=s+" ";
        string ff="";
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                temp+=s[i];
            }
            else{
                if(i==s.size()-1)
                {
                    ff+=revs(temp);
                }
                else{
                                    ff=ff+revs(temp)+" ";

                    
                }
                temp="";
            }
        }
        // auto it=s.end();
        // s.erase(it);
        
        return ff;
    }
};