class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                i++;
            }
            else 
            {
                cout<<"N "<<nums[i];
                arr.push_back(nums[i]);
            }
        } 
        if(nums[n-1]!=nums[n-2])
        {
            cout<<"S "<<nums[n-1]; 
            arr.push_back(nums[n-1]);
        }
        return arr;       
    }
};