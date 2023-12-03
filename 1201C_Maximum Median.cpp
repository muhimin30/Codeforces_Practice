#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();

	int n, k; cin >> n >> k;

	vector<ll> num(n + 1);

	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	ll min_med = num[(n / 2) + 1], max_med = min_med + k;
	int med_ind = (n / 2) + 1;

	ll ans = 0;
	while(min_med <= max_med){
		ll mid = (min_med + max_med) / 2;

		ll move = 0;
		for(int i = med_ind; i <= n; i++ ){
			if(num[i] < mid){
				move += mid - num[i];
			} 

			if(move > k){
				move = k + 1;
				break;
			}
		}

		if(move <= k){
			ans = mid;
			min_med = mid + 1;
		}
		else{
			max_med = mid - 1;
		}
	}

	cout << ans << endl;
	return 0;
}
