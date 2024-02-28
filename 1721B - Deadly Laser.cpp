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
		int n, m, x, y, d; cin >> n >> m >> x >> y >> d;

		int dif = abs(n - x) + abs(m - y);

		int left_top = max(y - 1, x - 1);
		int right_btm = max(m - y, n - x);

		if(x == 1 || x == n){
			right_btm = n - 1;
		}
		if(y == 1 || y == m){
			left_top = m - 1;
		}
		bool check = true;
		//cout << left_top << ' ' << right_btm << endl;
		if(dif <= d || left_top <= d || right_btm <= d){
			check = false;
		} 

		if(check){
			cout << ((n - 1) + (m - 1)) << endl;
		}
		else{
			cout << -1 << endl;
		}
	}

	return 0;
}
