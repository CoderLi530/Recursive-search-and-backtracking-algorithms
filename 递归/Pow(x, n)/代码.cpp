class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        double tmp = myPow(x, abs(n/2));
        if (n < 0) return n % 2 == 0 ? 1.0 / (tmp * tmp) : 1.0 / (tmp * tmp * x);
        return n % 2 == 0 ? tmp * tmp : tmp * tmp * x;
    }
};