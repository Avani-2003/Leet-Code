class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long int sum=0 , temp=0;
        int j=0;
        set<int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            while(mpp.count(nums[i]) || mpp.size()==k)
            {
                temp -= nums[j];
                mpp.erase(nums[j]);
                j++;
            }
            temp += nums[i];
            mpp.insert(nums[i]);
            if(mpp.size()==k)
            {
                sum=max(temp,sum);
            }
        }
        return sum;
    }
};