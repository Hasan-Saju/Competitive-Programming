#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string applySubstitutions(vector<vector<string>>& replacements, string text)
    {
        map<string, string>mp;
        for(auto vec:replacements)
        {
            mp[vec[0]] = vec[1];
        }

        string ans="";
        for(int i=0; i<text.size()-2; i++)
        {
            if(text[i]=='%' and text[i+2]=='%')
            {
                string temp;
                temp.push_back(text[i+1]);
                ans+=mp[temp];
                i+=2;
            }
            else
                ans+=text[i];

            cout<<ans<<" ";
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<string>>vec = {{"A","bce"},{"B","ace"},{"C","abc%B%"}};
    string text = "%A%_%B%_%C%";
    obj.applySubstitutions(vec, text);
}

