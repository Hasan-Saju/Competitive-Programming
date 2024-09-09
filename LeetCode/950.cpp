#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        vector<int>result;
        int sz = deck.size();
        for(int i=0, j=sz-1; i<j; i++, j-- )
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {17,13,11,2,3,5,7};
    obj.deckRevealedIncreasing(vec);
}

