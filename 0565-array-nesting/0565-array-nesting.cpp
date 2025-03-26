class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int count=INT_MIN;

        for(int i=0;i<nums.size();i++) {
            if(nums[i]<0) continue;

            count=max(count, calculate(nums, i));
        }
        return count;
    }

    int calculate(vector<int>& nums, int start) {
        if(start<0 || nums[start]<0 || start==nums.size()) {
            return 0;
        }

        int next = nums[start];
        nums[start]=INT_MIN;
        return 1+calculate(nums, next);
    }
};