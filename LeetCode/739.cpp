#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        vector<int>ans(temperatures.size());
        stack<int>st,ind;

        for(int i=temperatures.size()-1; i>=0; i--)
        {
            int work=temperatures[i];
            if(st.empty())
            {
                ans[i]=0;
                st.push(work);
                ind.push(i);
                cout<<"1st\n";
            }
            else
            {

                while(true)
                {
                    if(st.top()>work)
                    {
                        ans[i]=ind.top()-i;
                        st.push(work);
                        ind.push(i);
                        cout<<"boro\n";
                        break;
                    }

                    st.pop();
                    ind.pop();
                    if(st.empty())
                    {
                        ans[i]=0;
                        st.push(work);
                        ind.push(i);
                        cout<<"2nd\n";
                        break;
                    }

                }

            }
        }

        for(auto x:ans)
            cout<<x<<" ";

        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {73,74,75,71,69,72,76,73};
    obj.dailyTemperatures(vec);
}


