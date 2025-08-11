class Solution {
public:
    vector<vector<int>>ans;
    void permutation(vector<int>&nums, int i,int size) {
        if(i==size) {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<size;j++) {
            swap(nums[j],nums[i]);
            permutation(nums,i+1,size);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {   
        permutation(nums, 0, nums.size());
        return ans;
    }
};