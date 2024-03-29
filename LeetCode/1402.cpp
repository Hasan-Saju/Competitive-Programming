#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSatisfaction(vector<int>& satisfaction)
    {
        int ans=0;
        vector<int>pos;
        vector<int>neg;
        int posSum=0, negSum=0;

        for(int i=0; i<satisfaction.size(); i++)
        {
            if(satisfaction[i]>=0)
                {
                    pos.push_back(satisfaction[i]);
                    posSum+=satisfaction[i];
                }
            else
                neg.push_back(satisfaction[i]);
        }

        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end(), greater<int>());
        int left =0;

        for(int i=0;i<neg.size();i++)
        {
            if( (abs(neg[i])*(i+1)) <= posSum)
                left++;
        }
        cout<<"Sum "<<posSum<<"\n";
        cout<<left<<"\n";
        sort(satisfaction.begin(), satisfaction.end());
        sort(neg.begin(), neg.end());
        int start =1;
        int sz=neg.size();
        int negInd=0;

        cout<<ans;
         for(int i=0; i<satisfaction.size(); i++)
        {

            if( satisfaction[i]>=0)
            {
                ans = ans + (start*satisfaction[i]);
                cout<<start<<" "<<satisfaction[i]<<"u\n";
                cout<<ans<<"\n";
                start++;
            }
            else if( (satisfaction[i]<0 and i<left)  )
            {
                ans = ans+ (start*neg[sz-left+negInd]);
                cout<<start<<" "<<neg[sz-left+negInd]<<"\n";
                negInd++;
                cout<<ans<<"\n";
                start++;
            }

            else
                continue;


        }

        cout<<ans;

        return ans;


    }
};

int main()
{
    Solution obj;
    vector<int>vec = {-5,-7,8,-2,1,3,9,5,-10,4,-5,-2,-1,-6};
    obj.maxSatisfaction(vec);
}

//
//[-8,4,-10,4,-7,-10,2,4,-9,3,0,-8,-3,-7,8,8]
