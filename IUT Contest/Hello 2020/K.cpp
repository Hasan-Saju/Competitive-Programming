
#include <bits/stdc++.h>
using namespace std;
void Subset(long long arr[],long long n)
{
	long long  count = pow(2,n);
	long long o=0,sum=0;
	for (int i = 0; i < count; i++)
	{ o=0;

		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) > 0)
				//cout << arr[j] << " ";
				o=o | arr[j];
		}
		sum=sum+o;
		//cout <<sum<< "\n";
	}
	cout<<sum;
}

int main()
{
	long long n;
	cin >> n;
	long long arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	Subset(arr,n);

	return 0;
}
