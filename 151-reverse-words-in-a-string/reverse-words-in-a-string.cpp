class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            arr.push_back(i);
        }
        string ans;
        for(int i=arr.size()-1;i>=0;i--)
        {
            cout<<arr[i]<<endl;
            for(int j=arr[i]+1;j<n;j++)
            {
                // cout<<"S"<<" "<<s[j];
                if(s[j]==' ')
                break;
                else ans = ans + s[j];;
                // cout<<ans<<" "<<j;
            }
            // cout<<ans<<" "<<n<<endl;
            if(arr[i]+1!=n)
            ans = ans + ' ';
            n = arr[i];
        }
            
        if(s[0]!=' ')
        {
            for(int i=0;i<n;i++)
            ans = ans + s[i];
        }
        n = ans.size()-1;
        if(ans[n]==' ')
        {
            ans.erase(n,1);
        }
        return ans;
        
    }
};