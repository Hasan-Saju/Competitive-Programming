#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int>& nums)
    {

        ///floyd's tortoise and hare algorithm
        /// Find the intersection point of the two runners.

        int tortoise=nums[0];
        int hare = nums[0];

        do
        {
            tortoise=nums[tortoise];
            hare = nums[nums[hare]];
        }
        while(tortoise!=hare);

        /// Find the "entrance" to the cycle.
        tortoise=nums[0];
        while(tortoise!=hare)
        {
            tortoise=nums[tortoise];
            hare = nums[hare];
        }
        cout<<hare;
        return hare;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,3,4,2,2};
    int ans=obj.findDuplicate(vec);
//    cout<<ans;
}







