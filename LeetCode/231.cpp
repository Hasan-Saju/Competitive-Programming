#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(long long n)
    {
        if(n==0)
            return false;
        return (n&(-n)) == n;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.isPowerOfTwo(9);
}
