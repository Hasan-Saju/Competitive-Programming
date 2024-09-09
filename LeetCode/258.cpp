#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int ans = num%9;
        if(num && !ans)ans = 9;
        return ans;
    }
};

int main()
{
    Solution obj;
    int num=0;
    cout<<obj.addDigits(num);
}
