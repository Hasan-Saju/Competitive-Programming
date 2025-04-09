#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool lemonadeChange(vector<int>& bills)
    {
        int changeV=0, changeX=0;
        for(auto bill:bills)
        {
            if(bill==5)
                changeV++;
            else if(bill==10 and changeV)
            {
                changeX++;
                changeV--;
            }
            else if(bill==20 and (changeV>=3 or (changeX>0 and changeV>0)))
            {
                if(changeX)
                {
                    changeX--;
                    changeV--;
                }
                else
                    changeV-=3;
            }
            else
                return false;
        }
        return true;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {5,5,5,10,5,5,10,20,20,20};
    cout<<obj.lemonadeChange(vec);
}

