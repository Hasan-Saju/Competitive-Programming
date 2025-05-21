#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int pos1=0, pos2=0;
        for(auto dir:moves)
        {
            if(dir=='U')
                pos1++;
            else if(dir=='D')
                pos1--;
            else if(dir=='L')
                pos2++;
            else
                pos2--;
        }
        if(pos1==0 and pos2==0)
            return true;
        else return false;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}
