#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int>sides;
    int target;
    bool recurse(int i, vector<int>& matchsticks)
    {
        if(i==matchsticks.size())
            return true;

        for(int j=0; j<4; j++)
        {
            if(sides[j]+matchsticks[i]<=target)
            {
                sides[j] += matchsticks[i];
                if(recurse(i+1, matchsticks))
                    return true;

                sides[j]-=matchsticks[i];
            }
        }
        return false;
    }

    bool makesquare(vector<int>& matchsticks)
    {
        int sum =0 ;
        for(auto x:matchsticks)
            sum+=x;

        if(sum%4)
            return false;

        target = sum/4;
        sides.resize(4,0);

        sort(matchsticks.begin(), matchsticks.end(), greater<int>());
        return recurse(0, matchsticks);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.makesquare(vec);
}

