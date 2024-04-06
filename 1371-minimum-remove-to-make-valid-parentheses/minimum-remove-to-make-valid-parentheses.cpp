class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count=0;
        vector<int> arr;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('){
                arr.push_back(i);
                count++;
            } 
            else if(s[i]==')'&& count>0) {
                arr.pop_back();
                count--;
            }
            else if(s[i]==')' && count==0){
                s.erase(s.begin()+i);
                i--;
            }
        } 
       // cout<<"C= "<<count<<endl;
        int i=0;
        while(arr.size()>0)
        {
            s.erase(s.begin()+arr.back());
            arr.pop_back();
        }
        return s;       
    }
};