#include<bits/stdc++.h>
using namespace std;

int main() {
	long n, m;
	cin>>n>>m;
	long arr[n];
	memset(arr, 0, sizeof(arr));
	for(int i=1;i<=m;i++) {
		long a,b,k;
		cin>>a>>b>>k;
		for(int j=a-1;j<=b-1;j++)
			arr[j] = arr[j] + k;
	}
	// for(int i=0;i<n;i++)
		cout<<*max_element(arr, arr+n);
	return 0;
}