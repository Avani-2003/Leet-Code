class Solution {
public:
    int check(vector<int>& piles, int h,int temp)
    {
        int count = 0;
        for(int i=0;i<piles.size();i++)
        {
            count += ceil((double)piles[i]/(double)h);
            if(count>temp) return count;
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , high = *max_element(piles.begin(),piles.end());
        int count=0, ans = high;
        // cout<<hig    h;
        while(high>=low)
        {
            int mid = (high+low)/2;
            int temp = check(piles,mid,h);
            if(temp<=h) 
            {
                // cout<<temp<<" "<<mid<<endl;
                high = mid-1;
                ans = min(ans,temp);
            }
            else low = mid+1;
        }
        return low;
        // int count=0,banana=1,flag=0,i=0,n=piles.size();
        // return 1;
        // if(h==n-1)
        // {
        //     sort(piles.begin(),piles.end());
        //     return piles[n-1];
        // }
        // if(n==1)
        // {
        //     banana = piles[0]/h;
        //     if(piles[0]%h!=0)
        //     {
        //         return banana+1;
        //     }
        //     return banana;
        // }
        // while(flag!=-1)
        // {
            
        //     i=0;
        //     for(i=0;i<n;i++)
        //     {
        //         count += piles[i]/banana;
        //         if(piles[i]%banana!=0) count++;
        //         if(count>h) break;
        //     }
        //     // cout<<count<<endl;
            
        //     if(i==n && count<=h) 
        //     {
        //         flag=-1;
        //         return banana;
        //     }
        //     count=0;
        //     banana++;
        // }
        // return banana;
    }
};