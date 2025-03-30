class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last[26] = {-1};
        for(int i=0;i<s.size();i++) {
            last[s[i]-'a']=i;
        }

        vector<int> ans;

        int curr_count=0, curr_last=0;

        for(int i=0;i<s.size();i++) {
            curr_count++;
            if(curr_last<last[s[i]-'a']) {
                curr_last=last[s[i]-'a'];
            }
            if(curr_last==i) {
                ans.push_back(curr_count);
                curr_count=0;
                curr_last=i+1;
            }
        }
        return ans;
    }
};