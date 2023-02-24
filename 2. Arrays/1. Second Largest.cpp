#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int print2largest(int arr[], int n) 
	{
	    sort(arr, arr+n);
	    int a=0, cnt=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        if(arr[i]!=arr[i-1])
	        {
	            a=arr[i-1];
	            break;
	        }
	        else
	            cnt++;
	    }
	    if(cnt!=n)
	        return a;
	    else
	        return -1;
	        
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}