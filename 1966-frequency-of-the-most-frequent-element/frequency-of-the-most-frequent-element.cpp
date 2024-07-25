class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long int freq = 1,l = 0,r = 0, n = nums.size(),total = 0;
        for(r=0;r<n;r++)
        {
            total = total + nums[r];
            if((nums[r]*(r-l+1))>total+k && l+1<=r)
            {
                total-=nums[l];
                l++;
            }
            freq = max(freq,r-l+1);
        }
        return freq;
    }
};