class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string str1="";
        int i=0,n=strs.size();
        while(strs[0][i]!=NULL || strs[n-1][i]!=NULL)
        {
            if(strs[0][i]==strs[n-1][i])
            str1+=strs[0][i];
            else
            break;
            i++;
        }
        // for(int i=0;i<str.length();i++)
        // {
        //     cout<<"I"<<i;
        //     if(str[i]!=strs[j][i])
        //     return str1;
        //     else
        //     str1+=str[i];
        //     j++;
        // }
        return str1;
    }
};