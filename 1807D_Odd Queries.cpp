#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();

	int t; cin >> t;

	while(t--){
		int n, q; cin >> n >> q;

		vector<ll>num(n + 1);

		num[0] = 0;

		for(int i = 1; i <= n; i++){
			ll temp; cin >> temp;

			num[i] = num[i - 1] + temp;
		}

		while(q--){
			int l , r, k; cin >> l >> r >> k;

			ll ans = (num[n] - (num[r] - num[l - 1])) + (k * ((r - l) + 1));

			//cout << num[n] << endl;

		 cout << ((ans % 2) ? "YES" : "NO") << endl;
		}

	}

	return 0;
}
