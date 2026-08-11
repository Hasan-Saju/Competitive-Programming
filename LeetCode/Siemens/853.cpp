#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed)
    {
        vector<pair<int,int>>v;
        for(int i=0; i<position.size(); i++)
        {
            v.push_back({position[i], speed[i]});
        }

        sort(v.begin(), v.end());
        vector<float>time;
        for(int i=0; i<v.size(); i++)
        {
            float t = (float)(target - v[i].first) / (float)v[i].second;
            time.push_back(t);
        }

        int group=1;
        float maxCurr = time[time.size()-1];
        for(int i=time.size()-2; i>=0; i--)
        {
            if(time[i]>maxCurr)
            {
                maxCurr = time[i];
                group++;
            }
        }

        return group;
    }
};
int main()
{
    Solution obj;
    vector<int>vec1 = {10,8,0,5,3};
    vector<int>vec2 = {2,4,1,1,3};
    obj.carFleet(12,vec1,vec2);
}

