class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int globalMax=nums[0],currentMax=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            currentMax=max(nums[i],currentMax+nums[i]);
            if(currentMax>globalMax)
                globalMax=currentMax;
        }

        return globalMax;

    }
};


///vai
class Solution {
private:
	int maxSubArrayHelper(vector<int>& nums, int left, int right) {
		if (left > right)
			return INT_MIN;

		int mid = left + (right - left) / 2;

		int maxLeft = maxSubArrayHelper(nums, left, mid - 1);
		int maxRight = maxSubArrayHelper(nums, mid + 1, right);

		int maxLeftSum = 0, maxRightSum = 0;
		//use any indication, large mininmum won't burst some cases

		for (int i = mid - 1, sum = 0; i >= left; i--) {
			sum += nums[i];
			maxLeftSum = max(maxLeftSum, sum);
		}

		for (int i = mid + 1, sum = 0; i <= right; i++) {
			sum += nums[i];
			maxRightSum = max(maxRightSum, sum);
		}

		int maxSubarrays = max(maxLeft, maxRight);
		int currSubarray =  nums[mid] + maxLeftSum + maxRightSum;

		return max(maxSubarrays, currSubarray);
	}
public:
	int maxSubArray(vector<int>& nums) {
		return maxSubArrayHelper(nums, 0, nums.size() - 1);
	}
};
