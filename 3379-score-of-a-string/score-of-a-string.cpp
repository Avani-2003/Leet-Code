class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length(),count=0;
        for(int i=0;i<n-1;i++)
        {
            count = count + abs(s[i]-s[i+1]);
        }
        return count;
    }
};