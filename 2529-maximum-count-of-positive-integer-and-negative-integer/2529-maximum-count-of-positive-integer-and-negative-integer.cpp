class Solution {
public:
    int maximumCount(vector<int>& nums) {
        // int posCount = 0, negCount = 0; -------T.C = O(n)
        // for(auto num : nums) {
        //     if(num>0) posCount++;
        //     else if(num < 0) negCount++;
        // }
        // return max(posCount,negCount);

        int negCount = binarySearch(nums,0);
        int posCount = nums.size()-binarySearch(nums,1);

        return max(posCount,negCount);
    }

    int binarySearch(vector<int>& nums, int target) {    // T.C = O(log(n))
        int left=0, right=nums.size()-1, result=nums.size();

        while(left<=right) {
            int mid=left+(right-left)/2;

            if(nums[mid]<target) {
                left=mid+1;
            }
            else{
                result=mid;
                right=mid-1;
            }
        }
        return result;
    }
};
