class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(groupSize==1) return true;
        else if(hand.size()%groupSize!=0) return false;
        else{
            sort(hand.begin(),hand.end());
            for(int i=0;i<hand.size();i++)
            {
                if(hand[i]==-1) continue;
                int temp = hand[i]+1,count=1;
                hand[i]=-1;
                for(int j=i+1;j<hand.size();j++)
                {
                    if(temp == hand[j])
                    {
                        hand[j]=-1;
                        count++;
                        temp++;
                    }
                    else if(temp < hand[j]) return false;
                    if(j==hand.size()-1 && count!=groupSize) return false;
                    if(count == groupSize) break;
                }
            }
        } 
        return true;       
    }
};