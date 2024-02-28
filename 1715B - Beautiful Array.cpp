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
		ll n; ll k, b, s; cin >> n >> k >> b >> s;
		vector<ll> ans(n);
		ll mx = (((b + 1) * k) - 1) + ((n - 1) * (k - 1));

		if(s > mx || (s / k) < b){
			cout << -1 << endl;
		}
		else{
			ll mx_2 = ((b + 1) * k) - 1;
			if(s > mx_2){
				ans[0] = mx_2;
				ll remain = s - mx_2;
				int ind = 1; 
				while(remain > 0){					
					ll temp = min(remain, k - 1);

					ans[ind] = temp;
					ind++;
					remain -= temp;
				}
				for(auto a: ans) cout << a << ' ';
				cout << endl;
			}
			else{
				ans[0] = s;
				for(auto a: ans) cout << a << ' ';
				cout << endl;
			}
			

		}
		


	}

	return 0;
}
