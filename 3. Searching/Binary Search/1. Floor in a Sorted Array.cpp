#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int findFloor(vector<long long> v, long long n, long long x)
    {
        int l=0, r=n-1, tmp=-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(v[mid]==x)
                return mid;
                
            else if(v[mid]>x)
                r=mid-1;
                
            else
            {
                l=mid+1;
                tmp=mid;
            }
        }
        return tmp;
    }
};

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}