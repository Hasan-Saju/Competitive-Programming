#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getMinSwaps(vector<int> arr)
    {
        vector<int>nonZero;
        int numOfZero=0;
        int numOfMoves=0;
        for(auto num:arr)
            if(num)
                nonZero.push_back(num);
            else
                numOfZero++;

        sort(nonZero.begin(), nonZero.end());

        for(int i=0; i<nonZero.size(); i++)
        {
            if(arr[i]!=nonZero[i])
            {
                arr[i]=nonZero[i];
                numOfMoves++;
            }
        }

        for(int i=nonZero.size(); i<arr.size(); i++)
        {
            if(arr[i]!=0)
            {
                arr[i]  = 0;
                numOfMoves++;
            }
        }

        return numOfMoves;

    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,3,1,0};
    int ans =  obj.getMinSwaps(vec);
    cout<<ans;
}
