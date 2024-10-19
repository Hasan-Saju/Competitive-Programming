#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int>first(26, -1);
        vector<int>last(26, -1);
        vector<vector<int>>data;
        vector<int>returnResult;

        for(int i=0; i<s.size(); i++)
        {
            int c = s[i]-'a';
            if(first[c]== -1)
                first[c] = i;
            last[c] = i;
        }

        for(int i=0; i<26; i++)
        {
            if(first[i]!=-1)
                data.push_back({first[i], last[i]});
        }

        sort(data.begin(), data.end());

        vector<int>temp = data[0];
        for(int i=1; i<data.size(); i++)
        {
            vector<int>current = data[i];
            if(current[0]>temp[1])
            {
                returnResult.push_back(temp[1]-temp[0]+1);
                temp = current;
            }
            else
            {
                temp[0] = min(temp[0], current[0]);
                temp[1] = max(temp[1], current[1]);
            }
        }
        returnResult.push_back(temp[1]-temp[0]+1);

        return returnResult;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.partitionLabels("ababcbacadefegdehijhklij");
}
