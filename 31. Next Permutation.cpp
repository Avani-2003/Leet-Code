class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1,n=nums.size();
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                ind=i-1;
                break;
            }
        }
        if(ind==-1){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(int i=n-1;i>ind;i--)
            {
                if(nums[ind]<nums[i])
                {
                    swap(nums[ind],nums[i]);
                    break;
                }
            }
            reverse(nums.begin()+ind+1, nums.end());
        }
    }
};
