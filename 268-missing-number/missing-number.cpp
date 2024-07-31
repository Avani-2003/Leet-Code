class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(temp!=nums[i])
            return temp;
            temp++;
        }
        return temp;
    }
};