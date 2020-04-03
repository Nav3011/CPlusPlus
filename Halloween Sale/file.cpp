#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int p,d,m,s;
	cin>>p;
	cin>>d;
	cin>>m;
	cin>>s;
	int count = 0;
	int cost = p;
	int new_c;
	if(p>s)
		cout<<count;
	else {
		while(cost<=s) {
			count = count + 1;
			new_c = p-count*d;
			if(new_c<=m)
				break;
			cost = cost + new_c;
			// cout<<new_c<<endl;
		}
		int remaining = s - cost;
		if(remaining>0)
		count = count + (remaining/m);
		cout<<count;
	}
	return 0;
}