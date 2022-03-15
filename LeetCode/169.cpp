#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int candidate;
        int kount=0;
        for(int i=0;i<n;i++)
        {
            if(kount==0)
                candidate=nums[i];

            nums[i]==candidate? kount++:kount--;
        }
        return candidate;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,2,1,1,1,2,2};
    cout<<obj.majorityElement(vec);
}


