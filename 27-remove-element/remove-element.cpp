class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),j=0,count=0;
        for(int i=0;i<n;i++)  
        {
            if(nums[j]==val)
            {
                nums.erase(nums.begin()+j);
                count++;
                //nums.push_back()
            }
            else{
              j++;  
            }
        } 
        return n-count;     
    }
};