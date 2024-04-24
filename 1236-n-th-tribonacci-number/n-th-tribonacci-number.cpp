class Solution {
public:
    int tribonacci(int n) {
        if(n==1 || n==2) return 1;
        else if(n==0) return 0;
        else{
            vector <int> arr;
            arr.push_back(1);
            arr.push_back(1);
            arr.push_back(2);
            for(int i=3;i<n;i++)
            arr.push_back(arr[i-1]+arr[i-3]+arr[i-2]);
            return arr[n-1];
        }
        return 0;
    }
};