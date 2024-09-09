#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int ans = 0;
        for(auto x:commands)
        {
            if(x=="UP")
                ans-=n;
            else if(x=="DOWN")
                ans+=n;
            else if(x=="LEFT")
                ans-=1;
            else
                ans+=1;
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<string>vec = {"RIGHT","DOWN"};
    cout<<obj.finalPositionOfSnake(2, vec);
}
