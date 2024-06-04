class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(),s.end());
        vector<int> temp;
        int count=1 , n = s.length();
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]) count++;
            else {
                temp.push_back(count);
                count = 1;
            }
        }        
        if(n!=1 && s[n-1]==s[n-2]) temp.push_back(count);
        else temp.push_back(1);
        // for(int i=0;i<temp.size();i++)
        // {
        //     cout<<"T "<<temp[i];
        // }
        count=-1;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]%2!=0) count++;
        }
        if(count == -1) return n;
        else return n-count;
    }
};