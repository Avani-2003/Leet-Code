class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int a[256]={0},b[256]={0},n=s.size();
        for(int i=0;i<n;i++)
        {
            if(a[s[i]]!=b[t[i]]) return false;
            a[s[i]]=i+1;
            b[t[i]]=i+1;
            //cout<<"A"<<int(s[i])<<"B"<<b[t[i]]<<endl;
        }
        return true;
    }
};