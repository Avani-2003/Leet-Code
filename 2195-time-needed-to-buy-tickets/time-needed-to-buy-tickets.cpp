class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0,n=tickets.size(),temp=tickets[k];
        for(int i=0;i<n;i++)
        {
            if(tickets[i]<temp)
            {
                count=count+tickets[i];
            }            
            else
            {
                if(i>k) count=count+temp-1;
                else count=count+temp;
            }
        }
        return count;
    }
};