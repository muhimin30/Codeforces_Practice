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

		ll ans = 0;
		for(int i = 0; i < n; i++){
			int temp; cin >> temp;
			ans += 1LL * temp;
		}

		int mx = 0;
		for(int i = 0; i < n; i++){
			int temp; cin >> temp;
			mx = max(mx, temp);
			ans += 1LL * temp;
		}
		ans -= mx;

		cout << ans << endl;
	}


	return 0;
}
