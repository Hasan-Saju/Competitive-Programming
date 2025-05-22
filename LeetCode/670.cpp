#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumSwap(int num)
    {
        string sn = to_string(num);
        string sortSt = sn;
        sort(sortSt.begin(),sortSt.end(), greater<char>());

        int start=-1;
        for(int i=0; i<sn.size(); i++)
        {
            if(sn[i]==sortSt[i])
                continue;
            else
            {
                start = i;
                break;
            }
        }

        cout<<start<<" "<<sortSt<<"\n";

        if(start==-1)
            return num;
        int temp=0, maxV=-1, maxInd=start;
        for(int i=start; i<sn.size(); i++)
        {
            int temp = sn[i]-'0';
            if(temp>=maxV)
            {
                maxV = temp;
                maxInd = i;
            }
        }
        swap(sn[start], sn[maxInd]);

        return stoi(sn);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.maximumSwap(2736);
}
