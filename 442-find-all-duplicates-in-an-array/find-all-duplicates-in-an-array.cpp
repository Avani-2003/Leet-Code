class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();
        int arr[100000]={0};
        for(int i=0;i<n;i++)
        {
            arr[nums[i]]++;
            if(arr[nums[i]]==2)
            temp.push_back(nums[i]);
        }
        return temp;        
    }
};