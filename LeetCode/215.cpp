#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        make_heap(nums.begin(),nums.end());
        for(int i=0; i<k-1; i++)
            pop_heap(nums.begin(), nums.end()), nums.pop_back();

        return nums.front();
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,3,15};
    obj.findKthLargest(vec,4);
}


