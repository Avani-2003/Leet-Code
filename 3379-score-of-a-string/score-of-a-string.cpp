class Solution {
public:
    int scoreOfString(string s) {
     int count=0,n=s.size();
     for(int i=0;i<n-1;i++)
     {
        count=count+abs(int(s[i])-int(s[i+1]));
     }
     return count;
    }
};