class Solution {
public:
    long long coloredCells(int n) {
        // long long count=1;
        // long long jump=4;
        // while(n>1) {
        //     count+=jump;
        //     jump+=4;
        //     n--;
        // }
        // return count;
        long long np=n;
        return 1+2*(np-1)*np;
    }
};