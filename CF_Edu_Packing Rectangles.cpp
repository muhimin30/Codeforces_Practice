#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();

	ll w, h , n; cin >> w >> h >> n;

	ll mx = max(w, h);

	ll ans = 0;

	ll l = 1, r = 1e14;

	while(l <= r){
		 
		ll mid = (l + r) / 2;

		ll width_cnt = mid / w;
		ll height_cnt = mid / h;
		if(width_cnt >= ceil((double)n / height_cnt)){
			ans = mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}

	cout << ans << endl;

	

	return 0;
}
