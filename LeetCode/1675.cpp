#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumDeviation(vector<int>& nums)
    {
        priority_queue<int> pq;
        int min_val = INT_MAX;

        for (int num : nums)
        {
            if (num % 2 == 1) num *= 2;
            pq.push(num);
            min_val = min(min_val, num);
        }
        int min_deviation = INT_MAX;

        while (!pq.empty())
        {
            int max_val = pq.top();
            pq.pop();

            min_deviation = min(min_deviation, max_val - min_val);

            if (max_val % 2 == 0)
            {
                max_val /= 2;
                pq.push(max_val);
                min_val = min(min_val, max_val);
            }
            else
                break;
        }

        return min_deviation;
    }
};


class Solution
{
public:
    int minimumDeviation(vector<int>& nums)
    {
        priority_queue<int>pq;
        priority_queue<int, vector<int>, greater<int>>rp;
        for(auto x: nums)
            pq.push(x);

        while(pq.top()%2==0)
        {
            int x = pq.top();
            x = x/2;
            pq.pop();
            pq.push(x);
        }
        int tp = pq.top();
        while(!pq.empty())
        {
            rp.push(pq.top());
            pq.pop();
        }

        int ans=tp-rp.top();
        cout<<ans<<"\n";
        while(rp.top()%2==1 and abs(tp- 2*rp.top())<abs(tp-rp.top()) )
        {
            ans =  abs(tp- 2*rp.top());
            int x = rp.top();
            x = x*2;
            rp.pop();
            rp.push(x);
        }

        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {10,4,3};
    cout<<obj.minimumDeviation(vec);
}

