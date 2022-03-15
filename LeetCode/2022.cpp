#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n)
    {
        int siz=original.size();

        vector<vector<int>> result;
        vector<int>temp;

        if(m*n!=siz)
            return result;
        for(int i=0; i<siz; i++)
        {
            if(i%n==0 and i!=0)
            {
                result.push_back(temp);
                temp.clear();

            }
            temp.push_back(original[i]);
        }
        result.push_back(temp);
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2};
    int m=1,n=1;
    obj.construct2DArray(vec,m,n);
}





