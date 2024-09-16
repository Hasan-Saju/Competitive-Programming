#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long checkValidity(vector<int>& piles, int h, int val)
    {
        long long turn = 0;
        for(auto x:piles )
            turn += ( (x + val - 1) / val);

        return turn;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx = INT_MIN;
        for(auto x:piles )
            mx = max(mx, x);
        int low = 1;
        int high = mx;
        int ans = 0;

        while(low <= high)
        {
            int mid = low + (high-low)/2;

            long long time = checkValidity(piles, h, mid);
            //cout<<time<<" "<<low<<" "<<mid<<" "<<high<<"\n";

            if(time==h)
            {
                ans = mid;
                high = mid - 1;
                //return ans;
            }
            else if(time<h)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }

        }

        return ans;

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,1,1,999999999};
    cout<<obj.minEatingSpeed(vec, 10);
}

