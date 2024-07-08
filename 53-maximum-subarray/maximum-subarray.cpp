class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int sum=0,temp=0,start=v[0],j=0;
        temp=start;
        sum=start;
        for(int i=1;i<v.size();i++)
        {
            if(temp<0)
            temp=v[i];
            else
            temp=temp+v[i];
            sum=max(temp,sum);
            // cout<<endl<<i<<" "<<temp<<" "<<sum<<" ";
        }
        return sum;
    }
};
