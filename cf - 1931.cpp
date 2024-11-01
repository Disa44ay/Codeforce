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


//#include<bits/stdc++.h>
//using namespace std;
//int main ()
//{
//    int t;
//    cin >> t;
//    cin.ignore();
//    while (t--)
//    {
//        int n;
//        cin >> n; // 5
//        if(n==1)
//        {
//            cout << "YES" << endl;
//            return 0;
//        }
//
//        int a[n];
//        int d, sum = 0, count = 0;
//        for(int i = 0; i < n; i++)
//        {
//            cin >> a[i]; // 4 5 5 0 6 4 4
//            sum += a[i]; // 28
//        }
//        d = sum / n; // 4
//        for(int i = 0; i < n; i++)  // 4 5
//        {
//            for(int j = 1; j < n; j++)  // 5 0
//            {
//                if(a[i] == d)
//                {
//                    j++;
//                }
//                else if(a[i] == a[j])
//                {
//                    count++;
//                    if(count == j - i)
//                    {
//                        cout << " YES" << endl;
//                        break;
//                    }
//                }
//
//                else if(a[i] > a[j] && a[i] > d)
//                {
//                    while(a[i] != d || a[j] != d)
//                    {
//                        a[i] = a[i] - 1;
//                        a[j] = a[j] + 1;
//                    }
//                }
//                else
//                {
//                    cout << "NO" << endl;
//                    break;
//                }
//            }
//        }
//
//
//    }
//    return 0;
//}
