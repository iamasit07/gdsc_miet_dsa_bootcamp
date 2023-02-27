#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

int _floor(int a[], int n, int x)
{
    int l = 0 , r= n-1, t = -1;
    while(l<=r)
    {
        int mid= l+(r-l)/2;
        if(a[mid]==x || a[mid]<x)
        {
            t= a[mid];
            l = mid+1;
        }
        else
            r=mid-1;
    }
    
    return t;
}

int _ceil(int a[], int n, int x)
{
    int l = 0 , r= n-1, t = -1;
    while(l<=r)
    {
        int mid= l+(r-l)/2;
        if(a[mid]==x || a[mid]>x)
        {
            t= a[mid];
            r= mid-1;
        }
        else
            l = mid+1;
        
    }
    
    return t;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) 
{
    sort(arr, arr+n);
    pair<int, int> v;
    int f = _floor(arr, n, x);
    int c = _ceil(arr, n , x);
    v = make_pair(f, c);
    return v;
}