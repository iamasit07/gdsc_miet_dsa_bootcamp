class Solution {
public:
    int bin(vector<int> &a, int l, int r, int x)
    {
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (a[m] == x)
                return m;
            else if (x < a[m])
                r = m - 1;
            else
                l = m + 1;
        }
        return -1;
    }
    int search(vector<int>& a, int x)
    {
        int n = a.size();
        if (n == 1)
        {
            if (a[0] == x)
                return 0;
            else
                return -1;
        }

        if (a[0] < a[n - 1])
            return bin(a, 0, n - 1, x);
        else
        {
            int l = 0, r = n - 1, m;
            while (l <= r)
            {
                m = l + (r - l) / 2;
                if (a[l] > a[m])
                {
                    if (a[m - 1] > a[m])
                    {
                        m--;
                        break;
                    }
                    r = m - 1;
                }
                else
                {
                    if (a[m] > a[m + 1])
                        break;
                    l = m + 1;
                }
            }
            if (a[0] <= x && x <= a[m])
                return bin(a, 0, m, x);
            else if (a[m + 1] <= x && x <= a[n - 1])
                return bin(a, m + 1, n - 1, x);
            else
                return -1;
        }
    }
};