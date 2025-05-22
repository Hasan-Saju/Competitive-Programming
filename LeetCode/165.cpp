#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        vector<string>s1, s2;
        stringstream ss;
        string token;

        ss.str(version1);

        while(getline(ss, token, '.'))
            s1.push_back(token);

        ss.clear();
        ss.str(version2);

        while(getline(ss, token, '.'))
            s2.push_back(token);


        for(int i=0; i< max(s1.size(),s2.size()); i++)
        {
            string temp1 = i<s1.size() ? s1[i] : "0";
            string temp2 = i<s2.size() ? s2[i] : "0";
            cout<<temp1<<" "<<temp2<<"\n";

            int t1 = stoi(temp1);
            int t2 = stoi(temp2);

            if(t1<t2)
                return -1;
            else if(t1>t2)
                return 1;
        }
        return 0;

    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    string version1 = "1.0.1";
    string version2 = "1";
    cout<<obj.compareVersion(version1, version2);
}
