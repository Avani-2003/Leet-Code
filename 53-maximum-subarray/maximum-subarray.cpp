class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(ans<=0)
            ans=0;
            ans = ans + nums[i];
            result = max(ans,result);
        }    
        return result;    
    }
};;