#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}

int missingNumber(int A[], int N)
{
    // total sum of N natural numberss
    int tsum = (N*(N+1))/2;
    int sum=0;
    
    // sum of the numbers present in the array
    for(int i=0;i<N-1;i++)
        sum += A[i];

    // the difference will be the missing number
    int t=tsum-sum;
    
    return t;
}