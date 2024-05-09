//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	int n, k; cin >> n >> k;

	vector<int> a(n + 1), b(n + 2);
	vector<ll> b_suff(n + 2);

	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}

	b[n + 1] = 0;

	for(int i = n; i > 0; i--){
		b_suff[i] = b[i] + b_suff[i + 1];
	}




	ll cost = 0;
	int last = n + 1;
	for(int i = n; i > k; i--){
		if(a[i] < b[i]){
			cost += a[i] + (b_suff[i + 1] - b_suff[last]);

			last = i;
		}
	}



	ll min_cost = cost + a[k] + (b_suff[k + 1] - b_suff[last]);
	//cout << min_cost << endl;
	for(int i = k - 1; i > 0; i--){
		ll temp = cost + a[i] + (b_suff[i + 1] - b_suff[last]);

		min_cost = min(min_cost, temp);
	}

	cout << min_cost << endl;

	
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


