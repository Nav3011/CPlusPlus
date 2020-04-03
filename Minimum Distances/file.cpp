#include <bits/stdc++.h>
using namespace std;
void minimum_distance(vector<int> arr) {
	// int len = sizeof(arr)/sizeof(arr[0]);
	int count = INT_MAX;
	int flag=0;
	for(int i=0;i<arr.size()-1;i++) {
		for(int j=i+1;j<arr.size();j++) {
			if(arr[i]==arr[j]) {
				if(j-i<=count)
					count = j-i;
					flag = 1; 
			}
		}
	}
	if(flag==1)
		cout<<count<<endl;
	else
		cout<<-1<<endl;
}

int main(int argc, char const *argv[])
{
	int n,p;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++) {
		cin>>p;
		v.push_back(p);
	}
	minimum_distance(v);
	return 0;
}