#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int count(int arr[], int n, int x)
	{
	    int cnt=0;
	    int l=0, r=n-1;
	    while(l<=r)
	    {
	        int mid=l+(r-l)/2;
	        if(arr[mid]<x)
	            l=mid+1;
	        else
	            r=mid-1;
	    }
	    if(arr[l]!=x)
	        return cnt;
	    int tmp=l;
	    r=n-1;
	    while(l<=r)
	    {
	        int mid=l+(r-l)/2;
	        if(arr[mid]<(x+1))
	            l=mid+1;
	        else
	            r=mid-1;
	    }
	    return cnt=l-tmp;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}