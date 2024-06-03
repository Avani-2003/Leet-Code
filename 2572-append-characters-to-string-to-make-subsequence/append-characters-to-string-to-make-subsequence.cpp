class Solution {
public:
    int appendCharacters(string s, string t) {
        int count = 0, n=s.length(), m=t.length();
        for(int i=0;i<n && count<m;i++)
        {
            if(t[count]==s[i]) count++;
        }
        return m-count;
    }
};