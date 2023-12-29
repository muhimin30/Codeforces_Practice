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
		ll n, x1, y1, x2, y2; cin >> n >> x1 >> y1 >> x2 >> y2;

		ll first = min(min(x1 - 0, (n + 1) - x1), min(y1 - 0, (n + 1) - y1));
		ll second = min(min(x2 - 0, (n + 1) - x2), min(y2 - 0, (n + 1) - y2));

		cout << abs(first - second) << endl;
	}

	return 0;
}
