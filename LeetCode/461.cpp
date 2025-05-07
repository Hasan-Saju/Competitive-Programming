#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int z = x^y;
        int res=0;
        while(z)
        {
            res += z&1;
            z = z>>1;
        }
        cout<<res;
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.hammingDistance(1,4);
}

