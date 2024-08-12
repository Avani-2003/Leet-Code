class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // sort(ransomNote.begin(),ransomNote.end());
        // sort(magazine.begin(),magazine.end());
        unordered_map<char,int> mpp;
        for(int i=0;i<magazine.size();i++)
        {
            mpp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            mpp[ransomNote[i]]--;
            if(mpp[ransomNote[i]]==-1) return false;
            // if(mpp.find(ransomNote[i])!=mpp.end())
            // mpp[ransomNote[i]]--;
            // else  return false;
        }
        return true;
    }
};