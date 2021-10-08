#include <bits/stdc++.h>
using namespace std;
 
void init()
{
	int n;
	string s;
	cin >> n >> s;
 
	for(int i = 0; i < (int)s.size(); i++) {
		if(s[i] == '1') {
	      if(i % 2 == 0) cout << "Takahashi" << endl;
	      else cout << "Aoki" << endl;
	      break;
	    }
	}	
}
 
int main()
{		 
	//#ifndef ONLINE_JUDGE
		//freopen("input.txt","r",stdin);
		//freopen("output.txt","w",stdout);
	//#endif
		 
	init();
		 
	return 0;
}