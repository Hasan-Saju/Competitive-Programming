#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto x:stones)
            pq.push(x);

        while(pq.size()>1)
        {
            int x = pq.top();
            pq.pop();

            int y = pq.top();
            pq.pop();

            if(x==y)
                continue;
            else
                pq.push(x-y);
        }
        pq.push(0);
        return pq.top();
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2, 2};
    cout<<obj.lastStoneWeight(vec);
}


