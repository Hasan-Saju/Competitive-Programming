class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1);

        dp[0]=1; //any number of value can repay the debt of 0;

        for(int i=0;i<coins.size();i++){
            int curr=coins[i];
            for(int j=curr;j<=amount;j++){
               dp[j]+=dp[j-curr];
            }

        }
      return dp[amount];
    }
};
