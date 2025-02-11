#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;
        int mid;

        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(guess(mid))
                r = mid-1;
            else if(guess(mid)==-1)
                l = mid+1;
            else
                return mid;
        }
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.guessNumber(20);
}

