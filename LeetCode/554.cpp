#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        map<int, int>segment;
        int mxIntersec=0;

        for(auto v:wall)
        {
            int acc=0;
            for(int i=0; i<v.size()-1; i++)
            {
                acc+=v[i];
                segment[acc]++;
                mxIntersec = max(mxIntersec, segment[acc]);
            }
        }
        return wall.size()-mxIntersec;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1},{1},{1}};
    cout<<obj.leastBricks(vec);
}

