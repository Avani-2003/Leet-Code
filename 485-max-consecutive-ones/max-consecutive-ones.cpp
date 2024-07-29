class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, n = nums.size(), temp=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1) count++;
            else {
                temp = max(temp,count);
                count=0;
            }
        }
        temp = max(temp,count);
        return temp;
    }
};