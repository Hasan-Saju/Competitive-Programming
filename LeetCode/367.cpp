#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1, r=num/2;

        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid<num)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        return false;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.isPerfectSquare(14);
}
