#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int result=0;
        for(int i=0;i<n;i++)
        {
            if(operations[i]=="X++" or operations[i]=="++X")
                result++;
            else
                result--;
        }
        //cout<<result;
        return result;
    }
};

int main()
{
    Solution obj;
    vector<string>vec = {"++X","X++","X++"};
    obj.finalValueAfterOperations(vec);
}





