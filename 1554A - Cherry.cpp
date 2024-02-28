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
		int n; cin >> n;

		vector<int> num(n);
		int mx = 0;
		ll ans = 0;
		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		for(int i = 0; i < n; i++){

			ll temp1 = 0, temp2 = 0;
			if(i > 0){
				temp1 = 1LL * num[i] * num[i - 1];
			}
			if(i < n - 1){
				temp2 = 1LL * num[i] * num[i + 1];
			}			
			ans = max(ans, max(temp1, temp2));
			
		}

		cout << ans << endl;
	}

	return 0;
}
