#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string simplifyPath(string path)
    {
        vector<string>st;
        string curr="";

        for(auto x:path+'/')
        {
            if(x=='/')
            {
                if(curr=="..")
                {
                    if(st.size())
                        st.pop_back();
                }
                else if(curr!="." and curr!="")
                    st.push_back(curr);

                curr="";
            }
            else
                curr+=x;
        }
        string res="/";
        for(int i=0; i<st.size(); i++)
        {
            res+=st[i];
            if(i!=st.size()-1)
                res+='/';
        }

        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.simplifyPath("/.../a/../b/c/../d/./");
}

