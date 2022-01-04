#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotatee(vector<vector<int>>& matrix)
    {
        int siz = matrix.size();

        int last =siz-1;
        int limit;

        if(siz%2==0)
            limit = siz/2;
        else
            limit = siz/2 + 1;

        for(int k=0; k<limit; k++)
        {
            for(int j=0; j<last; j++)
            {
                i=k;
                int temp = matrix[i][j];
                matrix[i][i+last]=matrix[i][i];

                int temp2=matrix[last][last];
                matrix[last][last]=temp;

                temp = matrix[last][i];
                matrix[last][i] = temp2;

                matrix[i][i]=temp;

                last -=2;
                i++;
            }

        }

        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }


};

int main()
{
    Solution obj;
    vector<vector<int> > vec= {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    obj.rotatee(vec);
}


