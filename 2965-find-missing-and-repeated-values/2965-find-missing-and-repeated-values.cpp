class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>arr(n*n+1,0);
        vector<int> ans(2);

        for(int i=0;i<grid.size();i++) {
            for(int j:grid[i]) {
                arr[j]++;
            }
        }
        for(int i=1;i<arr.size();i++) {
            if(arr[i] > 1 ) {
                ans[0]=i;
            }
            else if(arr[i]==0) {
                ans[1]=i;
            }
        }
        return ans;
    }
};