// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int temp = n;
        while(n>0)
        {
            if(!isBadVersion(n))
            {
                if(temp == n) return temp;
                else return n+1;
            }            
            n--;
        }
        return n+1;        
    }
};