#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.myPow(2.0, 10);
}

