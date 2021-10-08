//problem source: https://codeforces.com/problemset/problem/1567/B

#include <bits/stdc++.h>

#define pb push_back
#define MAX 10000000
#define ll long long int

using namespace std;

unordered_set <int> s;

const int n = 3e5 + 1;
int a[n];

void pre(){
	for(int i = 1; i < n; i++) {
		a[i] = a[i - 1] xor (i - 1);
	}
}

void init()
{
	pre();

	int t;
	cin >> t;
	while(t--) {
		int A, B;
		cin >> A >> B;

		int x = a[A];

		if(x == B) {
			printf("%d\n", A);
		}
		else if((x xor B ) == A) {
			printf("%d\n", A + 2);
		} else {
			printf("%d\n", A + 1);
		}
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