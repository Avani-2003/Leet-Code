class Solution {
public:
    bool isPowerOfTwo(int n) {
        int one=0;
        if(n==0)
        return false;
        else{
            while(n!=0)
            {
                int m=n&1;
                if(m==1)
                one++;
                if(one>1)
                return false;
                n=n>>1;
            }
            return true;
        }
        
    }
};
