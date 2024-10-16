#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    bool check(vector<int>cha_s, vector<int>cha_t)
    {
        for(int i=0; i<60; i++)
        {
            if(cha_s[i]<cha_t[i])
                return false;
        }
        return true;
    }

    string minWindow(string s, string t)
    {
        vector<int>cha_s(60);
        vector<int>cha_t(60);

        for(auto x:t)
            cha_t[x - 'A']++;

        int maxL = INT_MAX;
        int f = -1;
        int l = -1;

        deque<int>q;

        for(int i=0; i<s.size(); i++)
        {

            if(cha_t[s[i] - 'A'])
            {
                q.push_back(i);
                cha_s[s[i] - 'A']++;

                bool c = check(cha_s, cha_t);

                while(c && q.size()>=t.size() && check(cha_s, cha_t))
                {
                    int temp = q.back()-q.front() + 1;
                    if(temp<=maxL)
                    {
                        maxL = temp;
                        f = q.front();
                        l = q.back();
                    }

                    cha_s[s[q.front()] - 'A']--;
                    q.pop_front();

                }

            }
        }

        string ans = "";
        for(int i=f; i<=l and f!=-1 ; i++)
            ans += s[i];

        return ans;

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.minWindow("cabwefgewcwaefgcf", "cae");
}


