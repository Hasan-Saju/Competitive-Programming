#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isNStraightHand(vector<int>& hand, int groupSize)
    {
        priority_queue<int, vector<int>, greater<int>>pq;
        map<int, int>kount;

        for(auto x:hand)
            kount[x]++;

        for(auto x:kount)
            pq.push(x.first);

        while(!pq.empty())
        {
            int small = pq.top();
            for(int i=0; i<groupSize; i++)
            {
                if(!kount[small+i])
                    return false;
                kount[small+i]--;
                if(kount[small+i]==0 && pq.top() == small+i )
                    pq.pop();
            }

        }

        return true;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,6,2,3,4,7,8};
    cout<<obj.isNStraightHand(vec, 3);
}

