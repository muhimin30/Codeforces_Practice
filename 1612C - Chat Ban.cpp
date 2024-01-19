#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

ll k, x; 

bool check(ll m){
	ll sum = 0;
	if(m > k){
		sum += (k * (k + 1)) / 2;

		ll remain = k - 1;
		ll remain_sum = (remain * (remain + 1)) / 2;

		ll temp = remain - (m - k);
		ll temp_sum = (temp * (temp + 1)) / 2;

		sum += remain_sum - temp_sum;
	}
	else{
		sum += (m * (m + 1)) / 2;
	}
	// cout << m << ' ' << sum << endl;
	// cout << endl;
	return (sum >= x);
}
int main()
{
	bismillah();
	int t; cin >> t;
	while(t--){
		cin >> k >> x;	

		int ans = (2 * k) - 1;

		ll l = 1, r = (2 * k) - 1; 

		while(l <= r){
			ll mid = l + ( r - l ) / 2;

			if(check(mid)){
				ans = mid;
				r = mid - 1;
			}
			else{
				l = mid + 1;
			}
		}


		cout << ans << endl;
	}

	return 0;
}
