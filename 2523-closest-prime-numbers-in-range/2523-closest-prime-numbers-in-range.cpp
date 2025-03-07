class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        
        vector<int>isPrime(right+1,true);
        for(int i=2;i*i<=right;i++) {
            if(isPrime[i]==true) {
                for(int j=2;j*i<=right;j++) {
                    isPrime[i*j]=false;
                }
            }
        }

        vector<int>prime;
        for(int i=max(2,left);i<=right;i++) {
            if(isPrime[i]==true) {
                prime.push_back(i);
            }
        }
        
        int a=0,b=INT_MAX;
        for(int i=1;i<prime.size();i++) {
            if((b-a)>(prime[i]-prime[i-1])) {
                a=prime[i-1];
                b=prime[i];
            }
        }

        vector<int>ans;
        if(a==0) return ans = {-1,-1};
        else return ans = {a,b};
    }
};