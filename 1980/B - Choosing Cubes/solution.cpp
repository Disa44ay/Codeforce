#include<bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
	int i,j,n,m,k,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		for(i=1;i<=n;i++)cin>>a[i];
		int num1=0,num2=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]>a[m])num1++;
			if(a[i]>=a[m])num2++;
		}
		if(k<=num1)cout<<"NO
";
		else if(k<num2)cout<<"MAYBE
";
		else cout<<"YES
";
	}
	
	
	return 0;
}