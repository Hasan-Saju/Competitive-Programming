#include<bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1;
        int right=n;
        int minBadVersion=-1;
        while(left<=right)
        {
            int mid = (right-left)/2+left;
            if(isBadVersion(mid))
            {
                minBadVersion = mid;
                mid = left+1;
            }
            else{
                mid = right-1;
            }
        }
        return minBadVersion;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.firstBadVersion(6);
}

1 2 3


