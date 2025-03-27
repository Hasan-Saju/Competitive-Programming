#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<dist.size(); i++)
            pq.push(ceil((float)dist[i]/speed[i]));

        int removee = 0;
        while(!pq.empty())
        {
            if(removee<pq.top())
                pq.pop();
            else
                break;

            removee++;
        }

        return removee;
    }
};
int main()
{
    Solution obj;
    vector<int>dist = {1,3,4};
    vector<int>speed = {1,1,1};
    cout<<obj.eliminateMaximum(dist, speed);
}

