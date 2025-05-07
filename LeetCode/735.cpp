#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> asteroidCollision(vector<int>& asteroids)
    {
        stack<int>st;
        for(auto x:asteroids)
        {
            if(st.empty() or (x>0) or (st.top()<0 and x<0))
                st.push(x);
            else
            {
                while(!st.empty())
                {
                    if(abs(x)>st.top() and st.top()>0)
                    {
                        st.pop();
                        if(st.empty() or st.top()<0)
                        {
                            st.push(x);
                            break;
                        }
                    }
                    else if(abs(x)==st.top() and st.top()>0)
                    {
                        st.pop();
                        break;
                    }
                    else
                        break;
                }
            }
        }

        vector<int>res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,-2,-2,-2};
    obj.asteroidCollision(vec);
}

