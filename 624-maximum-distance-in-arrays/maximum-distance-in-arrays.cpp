class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int diff = 0 ;
        int minele = arrays[0][0] , maxele = arrays[0].back();
        for(int i=1;i<arrays.size();i++)
        {
            diff = max(diff , abs(minele-arrays[i].back()));
            diff = max(diff , abs(maxele-arrays[i].front()));
            minele = min(minele , arrays[i][0]);
            maxele = max(maxele , arrays[i].back());
        }
        return diff;
    }
};