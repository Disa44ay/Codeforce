#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, sum = 0, a, x = 0, flag = 1;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		a = sum / n;
 
		for (int i = 0; i < n; i++)
		{
			x += arr[i] - a;
			if (x < 0)
			{
				cout << "NO" << endl;
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			cout << "YES" << endl;
		}
	}
	return 0;
}