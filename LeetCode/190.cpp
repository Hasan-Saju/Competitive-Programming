#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t target = 0;
        for(int i=0; i<32; i++)
        {
            int x = n&1;
            target = (target<<1) | x;
            n = n>>1;
        }
        return target;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    uint32_t x = obj.reverseBits(0b00000010100101000001111010011100);
    cout<<x;
}

