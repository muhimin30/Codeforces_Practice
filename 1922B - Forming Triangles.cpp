//Muhimin
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ncr(ll n,ll r){
	ll a = max(r , n - r);
	ll b = min(r , n - r);

	ll n_v = 1;

	for(int i = a + 1; i <= n; i++){
		n_v *= 1LL * i;
	}

	ll r_v = 1;
	for(int i = 2; i <= b; i++){
		r_v *= 1LL * i;
	}

	ll ans = n_v / r_v;

	return ans;
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> num(n);
		map<int, int> mp;

		for(int i = 0; i < n; i++){
			cin >> num[i];
			mp[num[i]]++;
		}
		vector<pair<int , int>> freq;
		freq.push_back({-1, 0});

		for(auto a: mp){
			int x = a.first, y = a.second;

			freq.push_back({a.first, (freq.back().second + a.second)});
		}
		ll ans = 0;



		for(int i = 1; i < freq.size(); i++){
			int val = mp[freq[i].first];
			if(val > 2){
				ans += ncr((ll)val, (ll) 3);
				ans += ncr((ll)val, (ll) 2) * (freq[i - 1].second); 
			}
			else if(val == 2){
				//cout << freq[i].second << ' ' << i << endl;
				ans += ncr((ll)val, (ll) 2) * (freq[i - 1].second);
			}
		}

		cout << ans << endl;	
	}
}