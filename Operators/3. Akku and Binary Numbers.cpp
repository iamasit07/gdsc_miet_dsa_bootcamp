#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void precompute()
    {
        //
    }
    
    long long solve(long long l, long long r)
    {
        int cnt=0;
        for(int i=0;i<63;i++)
        {
            for(int j=i+1;j<63;j++)
            {
                for(int k=j+1;k<63;k++)
                {
                    long long crr=0;
                    crr |= (1L<<i);
                    crr |= (1L<<j);
                    crr |= (1L<<k);
                    if(crr>=l && crr<=r)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};


int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}