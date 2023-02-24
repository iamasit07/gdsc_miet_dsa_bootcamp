#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
	int maxConsecutiveOnes(int N)
	{
		// setting a counter to count longest consecutive 1's.
		int cnt = 0;

		// loop will continue till the number becomes zero
		while (N != 0)
		{
			//changing the value of N for the while loop
			N = N & (N << 1);

			cnt++;
		}

		return cnt;
	}
};

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		Solution obj;
		cout << obj.maxConsecutiveOnes(n) << endl;
	}
	return 0;
}