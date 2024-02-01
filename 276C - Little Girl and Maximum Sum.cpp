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
	int n, q; cin >> n >> q;

	vector<ll> arr(n + 1);
	vector<ll> freq(n + 1);
	vector<pair<ll, ll>> que;
	vector<pair<ll, ll>> ind;

	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}

	while(q--){
		int l, r ; cin >> l >> r;
		que.push_back({l, r});

		freq[l]++;
		if(r < n){
			freq[r + 1]--;
		}
	}

	//track maximum freq;
	for(int i = 1; i <= n; i++){
		freq[i] += freq[i - 1];
		ind.push_back({freq[i], i});
	}

	sort(ind.begin(), ind.end());
	sort(arr.begin(), arr.end());

	//recreate the array
	for(int i = 0; i < n; i++){
		freq[ind[i].second] = arr[i + 1];
	}
	//start calculate;
	for(int i = 1; i <= n; i++){
		freq[i] += freq[i - 1];
	}

	ll ans = 0;

	for(auto a: que){
		ans += freq[a.second] - freq[a.first - 1];
	}

	cout << ans << endl;


	return 0;
}
