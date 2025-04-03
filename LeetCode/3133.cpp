#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minEnd(int n, int x) {
        long long temp=x;
        for(int i=0; i<n-1; i++)
            temp = (temp+1) | x;

        return temp;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.minEnd(3,4);
}

