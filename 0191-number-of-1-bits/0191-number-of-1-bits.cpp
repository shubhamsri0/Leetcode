class Solution {
public:
    
    int hammingWeight(int n) {
        int count=0;
        return weight(n,count);
    }

    int weight(int n, int &count) {
        if(n==0) return count;
        if(n%2!=0) {
            count++;
        }
        return weight(n/2,count);
    }
};