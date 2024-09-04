
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;  // Use long long to handle the edge case of n = INT_MIN
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double ans = 1.0;
        while (N > 0) {
            if (N % 2 == 1) {
                ans *= x;
            }
            x *= x;
            N /= 2;
        }
        
        return ans;
    }
};