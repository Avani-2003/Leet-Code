class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n,temp=0;
        if(n==0)
        temp=1;
        while(m!=0)
        {
            m=m>>1;
            temp=(temp<<1)|1;
        }  
        temp = (~n) & temp; 
        return temp;
    }
};
