class Solution {
public:
    double _pow(double x, int n)
    {
        if (n == 1)
            return x;
        return x * pow(x, n - 1);
    }
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1;
        else if (n < 0)
            return 1 / (_pow(x, abs(n)));
        return _pow(x, n);
    }
};