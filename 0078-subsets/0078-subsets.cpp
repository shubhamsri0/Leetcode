class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        bt(nums,ans,subset,0);
        return ans;
    }
    void bt(vector<int>nums,vector<vector<int>>& ans,vector<int>& subset,int i) {
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        bt(nums,ans,subset,i+1);
        subset.pop_back();
        bt(nums,ans,subset,i+1);
    }
};