//problem source: https://atcoder.jp/contests/abc210/tasks/abc210_c

#include <iostream>
#include <map>
using namespace std;
int n, k;
int c[300005];
map<int, int> mp;
int main(void)
{
  cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> c[i];
  for(int i = 1; i <= k; i++) mp[c[i]]++;
  int ans = mp.size();
  for(int i = k+1; i <= n; i++){
    mp[c[i]]++;
    mp[c[i-k]]--;
    if(mp[c[i-k]] == 0) mp.erase(c[i-k]);
    ans = max(ans, (int)mp.size());
  }
  cout << ans << endl;
  
  return 0;
}