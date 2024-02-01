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
		int n, m; cin >> n >> m;
		int sz = n * m;
		vector<int> num(sz);

		for(int i = 0; i < sz; i++){
			cin >> num[i];
		}

		ll sum = 0;

		int _mn = min(n , m);

		sort(num.begin(), num.end());



		int mn = num[0];
		int sec_mn = num[1];
		int mx = num[sz - 1];
		int sec_mx = num[sz - 2];

		ll sum1 = 0;

		ll temp1, temp2;
		//cout << (n - 1)<< ' ' <<(sz - (n - 1)) << endl;
		temp1 = 1LL * abs(mn - sec_mx) * (_mn - 1);
		temp2 = 1LL * abs(mn - mx) * (sz - (_mn));
		sum1 += (temp1 + temp2);

		ll sum2 = 0;
		temp1 = 1LL * abs(mx - sec_mn) * (_mn - 1);
		temp2 = 1LL * abs(mx - mn) * (sz - (_mn));
		sum2 += (temp1 + temp2);

		//cout << sum1 << ' ' << sum2 << endl;



		cout << max(sum1, sum2) << endl;
	}


	return 0;
}
