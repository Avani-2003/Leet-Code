class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size(),count=0;
        while(students.size()!=0)
        {
            if(students.front()==sandwiches.front())
            {
                n=students.size();
                count=0;
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
            }
            else
            {
                count++;
                students.push_back(students.front());
                students.erase(students.begin());
            }
            if(count==n) return students.size();
        }
        return 0;
    }
};