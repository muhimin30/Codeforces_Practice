//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 23;

void solve()
{
	int n; cin >> n;
	vector<int> color(n + 1);
	vector<int> last(n + 1);
	map<int, vector<int>> occ;
	for(int i = 1; i <= n;i++){
		cin >> color[i];
	}

	for(int i = 1; i <= n; i++){
		occ[color[i]].push_back((i - last[color[i]]) - 1);
	}
}


int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);

 int t = 1;
 //cin >> t;
 while(t--){
		solve();
 }

}


