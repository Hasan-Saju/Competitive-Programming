#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        vector<int>diff(gas.size(),0);

        for(int i=0; i<gas.size(); i++)
            diff[i] = gas[i]-cost[i];

        int global = INT_MIN;
        int local = 0;
        int start_ind=0;
        int total_sum=0;
        for(int i=0; i<diff.size(); i++)
        {
            total_sum+=diff[i];
            //cout<<total_sum<<endl;
            local+=diff[i];
            global = max(global,local);
            if(local<0)
            {
                local=0;
                start_ind=i+1;
            }
        }

        return total_sum>=0 ? start_ind:-1;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,4,5};
    vector<int>vec2 = {3,4,5,1,2};
    cout<<obj.canCompleteCircuit(vec, vec2);
}
