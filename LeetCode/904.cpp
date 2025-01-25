#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int totalFruit(vector<int>& fruits)
    {
        unordered_map<int, int>fc;
        int ans = 0;
        int total = 0;
        int l = 0;
        for(int i=0; i<fruits.size(); i++)
        {
            fc[fruits[i]]++;
            total++;

            while(fc.size()>2)
            {
                int f = fruits[l];
                l++;
                fc[f]--;
                total--;

                if(fc[f]==0)
                    fc.erase(f);
            }

            ans = max(ans, total);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {0,0,0,8,3,8,3,7,4};
    cout<<obj.totalFruit(vec);
}
