//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> num(n + 1);

		for(int i = 1; i <= n; i++){
			num[i] = i;
		}
		int l = n - 1, r = n;
		ll ans = 0;
		while(1){
			for(int i = l, j = n; i < j; i++, j--){
				swap(num[i], num[j]);
			}
			ll sum = 0;
			ll mx = 0;
			for(int i = 1; i <= n; i++){
				sum += 1LL * num[i] * i;
				mx = max(mx, 1LL * num[i] * i);
			}
			ans = max(sum - mx, ans);
			for(int i = 1; i <= n; i++){
				num[i] = i;
			}
			l--;
			if(l == 0){
				break;
			}
		}

		cout << ans << endl;	
	}

	return 0;
}
