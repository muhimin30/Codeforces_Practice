#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
ll c;
int n;
vector<ll> num(200023);
ll sum(ll x){
	ll ans = 0;
	for(int i = 0; i < n; i++){
		ans += (num[i] + x) * (num[i] + x);
		//if its already overflow then we don't need to calculate fateher
		if(ans > c){
			return (c + 1);
		}
	}
	return ans;
}

int main()
{
	bismillah();

	int t; cin >> t;
	while(t--){
		cin >> n >> c;
		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		sort(num.begin(), num.begin() + n);
		
		ll l = 0, r = ceil(sqrtl(c));
		while(l <= r){
			ll mid = (l + r) / 2;
			ll temp_sum = sum(mid);
			if(temp_sum == c){
				cout << mid/2 << endl;
				break;
			}
			else if(temp_sum < c){
				l = mid + 1;
			}
			else{
				r = mid - 1;
			}
		}
	}

	return 0;
}
