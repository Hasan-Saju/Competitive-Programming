class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs){
        bool id[500]; // whether that day is in the visiting list
        int i, n = days.size(), dp[500];
        if(n==1)
            return min({costs[0], costs[1], costs[2]}); // if we have only day
        memset(id, 0, sizeof(id));

        for(auto day:days)
            id[day] = 1;

        for(int i=0;i<500;i++)
            dp[i] = INT_MAX;

        for(int i = 1+days[n-1];i<500;i++)
            dp[i] = 0;

        for(int i=days[n-1];i>=0;i--){
            if(id[i])
                dp[i] = min({dp[i], costs[0]+dp[i+1], costs[1] + dp[i+7], costs[2] + dp[i+30]}); // buying the best plan
            else
                dp[i] = dp[i+1]; // since that day is not in list so need to buy anything
        }

        return dp[0]; // final answer
    }
};
