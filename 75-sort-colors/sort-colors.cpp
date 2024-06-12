class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0 , end = nums.size()-1 , mid = 0 ;
        while(mid <= end)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else {
                if(nums[mid] == 1)
                mid++;
                else{
                    swap(nums[mid],nums[end]);
                    end--;
                }
            }
        }
    }
};