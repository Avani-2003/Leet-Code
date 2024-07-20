class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        ans.push_back(arr[0]);
        int temp=0;
        for(int i=1;i<arr.size();i++)
        {
            if(ans[temp][1]>=arr[i][0])
            {
                if(ans[temp][1]<arr[i][1])
                ans[temp][1]=arr[i][1];
            }
            else
            {
                ans.push_back(arr[i]);
                temp++;
            }
        }
        return ans;        
    }
};