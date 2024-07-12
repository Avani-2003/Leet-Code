class Solution {
public:
    string getEncryptedString(string s, int k) {
        string ans;
        if(k==s.size())
        return s;
        else if(k>s.size())
        {
            k=k%s.size();
        }
        for(int i=k;i<s.size();i++)
        {
            ans.push_back(s[i]);
        }
        for(int i=0;i<k;i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
};