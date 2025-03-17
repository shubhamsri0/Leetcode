class Solution {
public:
    bool divideArray(vector<int>& nums) {
        // unordered_map<int, int> mp;

        // for(auto num:nums) {
        //     mp[num]++;
        // }

        // for(auto num:mp) {
        //     if((num.second)%2!=0) return false;
        // }
        // return true;

        // Bit manipulation

        int bit1=0,bit2=0;
        for(auto num:nums) {
            bit1=bit1^num;
            bit2=(num+1)^bit2;
        }
        return bit1==0 && bit2==0;
    }
};