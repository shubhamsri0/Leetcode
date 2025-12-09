class Solution {
public:
    set<vector<int>>s;

    void GetallSum(vector<int>& array, int idx, int target, vector<vector<int>>& ans,
     vector<int>& combin) {

        if(idx==array.size() || target<0) return;

        if(target == 0) {
            if(s.find(combin) == s.end()) {
                ans.push_back({combin});
                s.insert(combin);
            }
            return;
        }
        combin.push_back(array[idx]);
        GetallSum(array,idx+1,target-array[idx],ans,combin);
        GetallSum(array,idx,target-array[idx],ans,combin);
        combin.pop_back();
        GetallSum(array,idx+1,target,ans,combin);

     }

    vector<vector<int>> combinationSum(vector<int>& array, int target) {
        vector<int> combin;
        vector<vector<int>> ans;
        GetallSum(array, 0, target, ans, combin);
        return ans;
    }
};