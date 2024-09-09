#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int setBit=0;
        while(n>0)
        {
            int x = n&1;
            if(x)
                setBit++;
            n = n >> 1;
            //cout<<n<<"\n";
        }
        return setBit;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    int num = 2147483645;
    cout<<obj.hammingWeight(num);
}

