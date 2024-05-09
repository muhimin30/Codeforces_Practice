//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	int n, x, y; cin >> n >> x >> y;
	if((x != 0 && y != 0) || (x == 0 && y == 0)){
		cout << -1 << "\n";
		return;
	}
	int mx = max(x, y);
	if((n - 1) % mx != 0){
		cout << - 1 << "\n";
		return;
	}
	for(int i = 1; i < n; i += mx + 1){
		for(int j = i; j < i + mx; j++){
			cout << i << ' ';
		}
	}
	cout << "\n";
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);

 int t = 1;
 cin >> t;
 while(t--){
		solve();
 }
}


