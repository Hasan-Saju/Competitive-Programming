class Solution {
public:
    bool canPartition(vector<int> &nums) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        if (sum % 2 != 0) {
            return false;
        }
        sum /= 2;
        vector<vector<int>> memo(nums.size(), vector<int>(sum + 1, -1));
        return canPartitionRecursive(nums, sum, 0, memo);
    }

private:
    bool canPartitionRecursive(vector<int> &nums, int sum, int index, vector<vector<int>> &memo) {
        if (index < 0 || index >= nums.size()) {
            return false;
        }

        if (sum == nums[index]) {
            return true;
        }

        if (memo[index][sum] == -1) {
            if (nums[index] < sum) {
                if (canPartitionRecursive(nums, sum - nums[index], index + 1, memo)) {
                    memo[index][sum] = 1;
                    return true;
                }
            }
            memo[index][sum] = canPartitionRecursive(nums, sum, index + 1, memo) ? 1 : 0;
        }
        return memo[index][sum];
    }
};
