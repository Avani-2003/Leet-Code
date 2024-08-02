class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size(),cnt0=0,ans=0;
        int coun = count(nums.begin(),nums.end(),1);
        for(int i=0;i<coun;i++)
            if(nums[i]==0)
                cnt0++;
        ans=cnt0;
        for(int i=coun;i<coun+n;i++)
        {
            if(nums[i%n]==0) cnt0++;
            if(nums[i-coun]==0) cnt0--;
            ans=min(ans,cnt0);
        }
        return ans;
    }
};