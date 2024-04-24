class Solution {
public:
    int tribonacci(int n) {
        if(n==1 || n==2) return 1;
        else if(n==0) return 0;
        else{
            int d,a=0,b=1,c=1;
            for(int i=3;i<=n;i++)
            {
                d=c;
                c=a+b+c;
                a=b;
                b=d;
            }
            return c;
        }
        return 0;
    }
};