class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int count = 0;
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=count;j<arr1.size();j++)
            {
                if(arr2[i]==arr1[j]) 
                {
                    swap(arr1[count],arr1[j]);
                    count++;
                }
            }
        }
        sort(arr1.begin()+count , arr1.end());
        return arr1;
    }
};