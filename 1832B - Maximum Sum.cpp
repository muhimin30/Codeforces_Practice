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
		int n, k; cin >> n >> k;
		vector<int> num(n);
		ll sum = 0;
		for(int i = 0; i < n; i++){
			cin >> num[i];
			sum += num[i];
		}

		sort(num.begin(), num.end());
		ll tmp_sum = 0;
		for(int i = 0; i < 2 * k; i++){
			tmp_sum += num[i];
		}
		int l = (2 * k) - 1;
		ll ans = tmp_sum;
		for(int i = n - 1; i >= (n - k); i--){
			tmp_sum += num[i];
			tmp_sum -= num[l] + num[l - 1];
			l -= 2;

			ans = min(ans, tmp_sum);
		}

		cout << sum - ans << endl;

	}

	return 0;
}
