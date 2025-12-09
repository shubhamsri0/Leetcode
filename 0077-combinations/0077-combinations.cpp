class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int> combin;

        getCombin(ans,combin,n,k,1);
        return ans;
    }
    void getCombin(vector<vector<int>>& ans, vector<int>& combin, int n, int k, int idx) {

        if(combin.size() == k) {
            ans.push_back(combin);
            return;
        }

        for(int i=idx;i<=n;i++) {
            combin.push_back(i);
            getCombin(ans,combin,n,k,i+1);
            combin.pop_back();
        }
    }
};