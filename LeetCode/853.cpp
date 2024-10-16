#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed)
    {
        vector<pair<int, int>>data;
        for(int i=0; i<position.size(); i++)
            data.push_back(make_pair(position[i], speed[i]));

        sort(data.begin(), data.end());

        vector<float>t;
        for(auto x:data)
        {
            float temp = (float) (target - x.first) /(float)  x.second;
            t.push_back(temp);

        }

        int fleet = 1;
        float currentMax = t[t.size()-1];
        for(int i=t.size()-2; i>=0; i--)
        {
            if(t[i]>currentMax)
            {
                currentMax = t[i];
                fleet++;
            }
        }

        return fleet;
    }
};

int main()
{
    Solution obj;
    vector<int>vec1 = {3};
    vector<int>vec2 = {3};
    cout<<obj.carFleet(1, vec1, vec2);
}


