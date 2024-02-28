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
	int n; ll m; cin >> n >> m;

	vector<int> num(n);

	for(int i = 0; i < n; i++){
		cin >> num[i];
	}

	ll sum = 0;
	int cnt = 0;
	int ans = 0;
	int r = 0;
	for(int i = 0; i < n; i++){
		while(r < n && sum + num[r] <= m){
			sum += num[r];
			r++;
		}
		ans = max(ans, r - i);

		sum -= num[i];
	}

	cout << ans << endl;
	return 0;
}
