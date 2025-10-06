#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int>& nums)
    {
        int smallest=-2;
        for(int i=nums.size()-1; i>=1; i--)
        {
            if(nums[i-1]<nums[i])
            {
                smallest = i-1;
                break;
            }
        }

        int secondLarge;
        int j=smallest+1;
        while(j<nums.size() and nums[j]>nums[smallest] and smallest>=0)
        {
            secondLarge = j;
            j++;
        }

        if(smallest>=0)
        {
            swap(nums[smallest], nums[secondLarge]);
            reverse(nums.begin()+smallest+1, nums.end());
        }
        else
            reverse(nums.begin(), nums.end());
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3};
    obj.nextPermutation(vec);
}

