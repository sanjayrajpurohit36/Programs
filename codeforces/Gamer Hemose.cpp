#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

void init()
{
	int t;
	cin >> t;
	while(t--) {
		int n, h;
		cin >> n >> h;
		int a[n];

		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort(a, a + n);

		int f = a[n - 1];
		int s = a[n - 2];
		ll sum = f + s;

		ll div = h / sum;

		ll mod = h % sum;
		int res = 0;

		// cout << div << mod << '\n';
		// cout << res << endl;
		if(f >= mod and mod != 0) {
			res = div * 2 + 1;
		}
		else if( mod == 0) {
			 res = div * 2;
		} else {
			res = div * 2 + 2;
		}
		cout << res << endl;
	}
}
int main()
{		 
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		 
	init();
		 
	return 0;
}