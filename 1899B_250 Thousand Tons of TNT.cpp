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
		int n; cin >> n;

		vector<ll> num(n);

		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		if(n == 1){
			cout << 0 << endl;
			continue;
		}

		vector<int> div;
		for(int i = 1; i <= sqrt(n); i++){
			if(n % i == 0){
				div.push_back(i);

				if(i * i != n){
					div.push_back(n / i);
				}
			}			
		}
		sort(div.begin(), div.end());

		ll ans = 0;
		for(int i = 0; i < ((int)div.size() - 1); i++){
			ll local_mx = 0;
			ll local_mn = LONG_LONG_MAX;
			for(int j = 0; j < n; j += div[i]){
				ll sum = 0;
				for(int k = j; k < j + div[i]; k++){
					sum += num[k];
				}
				local_mx = max(local_mx, sum);
				local_mn = min(local_mn, sum);
			}

			ans = max(ans, abs(local_mx - local_mn) );
		}


		cout << ans << endl;
		
	}

	return 0;
}
