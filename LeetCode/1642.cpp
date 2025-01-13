#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders)
    {
        priority_queue<int>pq;
        for(int i=0; i<heights.size()-1; i++)
        {
            int diff = heights[i+1]-heights[i];

            if(diff<=0)
                continue;

            pq.push(diff);
            bricks-=diff;
            if(bricks<0)
            {
                if(ladders==0)
                    return i;
                else
                {
                    ladders--;
                    bricks += pq.top();
                    pq.pop();
                }
            }

        }
        return heights.size()-1;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {4,12,2,7,3,18,20,3,19};
    cout<<obj.furthestBuilding(vec, 10, 2);
}

