class Solution {
public:

    void merge(vector<int>& arr,int low,int mid,int high)
    {
        int right = mid+1,left=low;
        vector<int> temp;
        while(right<=high && left<=mid)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++)
        arr[i] = temp[i-low];
    }

    void mergesort(vector<int>& nums,int low,int high)
    {
        if(low>=high) return;
        int mid = (low+high)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};