class Solution {
public:
    string reversePrefix(string str, char ch) {
        int found = str.find(ch),i=0;
        while(found>i)
        {
            swap(str[i],str[found]);
            i++;
            found--;
        }
        return str;
    }
};