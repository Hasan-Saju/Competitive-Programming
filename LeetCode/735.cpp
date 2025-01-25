#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0; i<asteroids.size(); i++)
        {
            if(st.empty())
                st.push(asteroids[i]);
            else{

                if(abs(asteroids[i])<st.top())
                    continue;
                else if(abs(asteroids[i]<st.top()))
                {
                    st.pop();
                    continue;
                }
                else{
                    while(abs(asteroids[i])>st.top())
                        st.pop();
                    if(st.empty())
                        st.push(asteroids[i]);
                    else
                        continue;
                }
            }
        }

        while(!st.empty())
        {
            cout<<st.top()<<"\n";
            st.pop();
        }
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {5, 10, -5};
    obj.asteroidCollision(vec);
}

