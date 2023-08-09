class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0,count1=0,count2=0,i=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            count0++;
            else{
                if(nums[i]==1)
                count1++;
                else
                count2++;
            }
        }        
        for(i=0;i<count0;i++)
        nums[i]=0;
        for(int j=0;j<count1;j++)
        {
            nums[i]=1;
            i++;
        }
        for(int j=0;j<count2;j++)
        {
            nums[i]=2;
            i++;
        }
        
    }
};
