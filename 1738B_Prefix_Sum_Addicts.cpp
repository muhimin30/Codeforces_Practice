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

		vector<ll> num(n + 1);

		for(int i = (n - k) + 1; i <= n; i++){
			cin >> num[i];
		}
		if(n == 1 || k == 1){
			cout << "YES" << endl;
			continue;
		}

		for(int i = n - k; i > 0; i--){
			num[i] = num[i + 1] - (num[i + 2] - num[i + 1]);
		}
		//num[0] = nu

		bool check = true;

		for(int i = 2; i <= n; i++ ){
			if(num[i] - num[i - 1] < num[i - 1] - num[i - 2]){
				check = false;
				break;
			}
		}

		// for(auto a: num) cout << a << ' ';
		// cout << endl;

		cout << ((check) ? "YES" : "NO" ) << endl;


	}

	return 0;
}
