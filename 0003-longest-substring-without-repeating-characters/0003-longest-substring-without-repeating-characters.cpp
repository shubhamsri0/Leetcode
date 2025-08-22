class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int curr=0,maxi=0;
        int start=0,end=0;

        while(end<s.length()) {
            mp[s[end]]++;
            while(mp[s[end]]>1) {
                mp[s[start]]--;
                start++;
            }
            curr=end-start+1;
            maxi=max(maxi,curr);
            end++;
        }
        return maxi;
    }
};