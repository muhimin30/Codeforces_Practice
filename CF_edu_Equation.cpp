#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();
	double n; cin >> n;

	double l = 0, r = 1e5, ans = 0;

	while( r - l >= 1e-7){
		double mid = l + (r - l) / 2;

		if(mid * mid + sqrt(mid) >= n){
			ans = mid;
			r = mid;
		}
		else{
			l = mid;
		}
	}

	fraction();
	cout << ans << endl;

	return 0;
}
