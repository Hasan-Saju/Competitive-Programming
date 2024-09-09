#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int wateringPlants(vector<int>& plants, int capacity)
    {
        int current = 0;
        int steps = plants.size();
        for(int i=0; i<plants.size(); i++)
        {
            current += plants[i];
            if(current>capacity)
            {
                current = plants[i];
                steps = steps + 2*i;
            }
        }
         return steps;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {7,7,7,7,7,7,7};
    cout<<obj.wateringPlants(vec, 8);
}

