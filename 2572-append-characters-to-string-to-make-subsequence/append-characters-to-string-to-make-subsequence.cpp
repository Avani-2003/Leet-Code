class Solution {
public:
    int appendCharacters(string s, string t) {
        int count = 0, n=s.length(), m=t.length();
        for(int i=0;i<n;i++)
        {
            if(t[count]==s[i]) count++;
            if(count==t.length()) return 0;
        }
        return m-count;
    }
};