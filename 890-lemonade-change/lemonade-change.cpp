class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0 , ten = 0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==10 && five!=0)
            {
                five--;
                ten++;
            }
            else if(bills[i]==20)
            {
                // cout<<"HI"<<endl;
                if(ten==0 && five>=3)
                {
                    five = five-3;
                }
                else {
                    // cout<<"HI"<<endl;
                    if(ten >= 1 && five>=1)
                    {
                        
                        ten--;
                        five--;
                    }
                    else return false;
                }
            }
            else if(bills[i]==5) five++;
            else return false;
        }
        return true;
    }
};