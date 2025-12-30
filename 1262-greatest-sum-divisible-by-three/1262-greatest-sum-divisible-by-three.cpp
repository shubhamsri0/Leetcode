class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int>dp (3,-1);
        dp[0] = 0;

        for(int i=0;i<nums.size();i++) {
            vector<int>temp = dp;
            for(int r=0;r<3;r++) {
                if(dp[r]!=-1) {
                    int newRem = (r+nums[i])%3;
                    temp[newRem] = max(temp[newRem],dp[r]+nums[i]);
                }
            }
            dp=temp;
        }
        return dp[0];
    }
};