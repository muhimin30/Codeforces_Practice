//Muhimin
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
		ll n, k, g; cin >> n >> k >> g;

		ll total_silver = 1LL * k * g;

		ll mn = (g - 1) / 2;
		ll ans = 0;
		if((mn * n) >= total_silver){
			ans += total_silver;
		}
		else{
			ans +=  mn * (n - 1);

			total_silver -= ans;
			//cout << ans << ' ' << total_silver << endl;

			ll r = total_silver % g;

			if( r >= ceil(g / 2.0)){
				ll last_recieve = total_silver + (g - r);
				//cout << total_silver % g << ' ' << mn << endl;

				if(last_recieve > total_silver){
					ans -= (last_recieve - total_silver);
				}
				else{
					ans += (total_silver - last_recieve);
				}
			}
			else{
				ans += r;	
			}

		}
		cout << max(ans, (ll)0) << endl;
		//cout << endl;
	}

	return 0;
}
