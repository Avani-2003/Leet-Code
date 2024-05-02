class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() && nums[i]<0;i++)
        {
            int j=nums.size()-1;
            while(-nums[i]<=nums[j])
            {
                if(-nums[i]==nums[j])
                return nums[j];
                j--;
            }
        }
        return -1;
    }
};