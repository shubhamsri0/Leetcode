class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int count=0;
        vector<int> arr;
        int m=grid.size(), n=grid[0].size();

        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        
        int mid=arr.size()/2;

        for(int i=0;i<arr.size();i++) {
            if(abs(arr[i]-arr[mid])%x) return -1;
            
            count+=abs(arr[i]-arr[mid])/x;
        }

        return count;
    }
};