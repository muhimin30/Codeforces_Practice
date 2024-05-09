//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll lcm(ll a, ll b){
	ll ans = (a * b) / __gcd(a, b);

	return ans;
}

void solve()
{
	ll n; cin >> n;
	
	vector<ll> div;
	map<ll, int> mp;

	for(ll i = 1; i * i <= n; i++){
		if(n % i == 0){
			div.push_back(i);
			mp[i]++;

			if(i * i != n){
				div.push_back(n / i);
				mp[n / i]++;
			}
		}
	}
	sort(div.begin(), div.end());
	ll mn = 1e12 + 23;
	ll a = 0, b = 0;
	for(int i = 0; i < div.size(); i++){
		ll temp = n / div[i];

		if(mp.find(temp) != mp.end()){
			if(lcm(div[i] , temp) != n) continue;
			ll x = max(div[i], temp);

			if(x < mn){
				mn = temp;
				a = min(div[i], temp);
				b = max(div[i], temp);
			}
		} 
	}


	cout << a << ' ' << b << "\n";
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


