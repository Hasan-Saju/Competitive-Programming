#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    int possible(vector<int>& candies, long long k, int per)
    {
        long long child=0;
        for(auto x:candies)
        {
            child += x/per;
        }
        if(child>=k)
            return 1;
        else
            return 0;
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int maxPossible=INT_MIN;
        for(auto x: candies)
            maxPossible = max(maxPossible,x);

        int low=0, high = maxPossible;
        while(low<high)
        {
            int mid = low + (high - low + 1) / 2;
            if(possible(candies, k, mid))
            {
                low = mid;
            }
            else
            {
                high = mid-1;
            }
            cout<<low<<" "<<mid<<" "<<high<<"\n";
        }
        return low;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {5,8,6};
    cout<<obj.maximumCandies(vec,3);
}
