#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

ll n; int a, b; 
bool check(ll m){

	ll cnt = 0;
	if(min(a , b) <= m){
		cnt++;
		m -= min(a, b);
		
		cnt += m / a;
		cnt += m / b;
	}

	return cnt >= n;
}

int main()
{
	bismillah();

	cin >> n >> a >> b;

	ll l = 1, r = 2e9 + 23;
	//cout << l << " " << r << endl; 

	ll ans = 0;
	while(l <= r){
		ll mid = l + (r - l) / 2;

		
		if(check(mid)){
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
