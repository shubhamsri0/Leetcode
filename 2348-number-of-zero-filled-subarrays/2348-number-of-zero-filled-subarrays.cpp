class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long count=0, st=0;

        for(int num:nums) {
            if(num==0) {
                st++;
                count+=st;
            }
            else {
                st=0;
            }
        }
        return count;
    }
};