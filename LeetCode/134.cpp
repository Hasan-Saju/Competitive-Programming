#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        vector<int>netSpeed;
        for(int i=0; i<gas.size(); i++)
            netSpeed.push_back(gas[i]-cost[i]);

        int highestChunk=0;
        int prev = 0;
        int endInd=0;
        int startInd=0;
        int start = 0;
        int netVecSize = netSpeed.size();
        for(int i=0; i<netVecSize; i++)
        {
            highestChunk = max(netSpeed[i], highestChunk + netSpeed[i]);

            if(highestChunk==netSpeed[i])
                start = i;
            if(highestChunk>prev)
            {
                endInd = i;
                startInd = start;
            }
            prev = highestChunk;
        }

        int runningSum=0;
        for(int i=startInd; ;i++)
        {
            if(i==netVecSize)
                i=0;

            runningSum+=netSpeed[i];
            if(i== (startInd-1+netVecSize) % netVecSize )
                break;
        }
        return runningSum>=0 ? startInd : -1;

    }
};

int main()
{
    Solution obj;
    vector<int>gas = {3, 1, 1};
    vector<int>cost = {1, 2, 2};
    cout<<obj.canCompleteCircuit(gas, cost);
}

