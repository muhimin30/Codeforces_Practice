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

		vector<ll> num(n);

		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		ll mx_sum = num[0];

		ll local_sum = num[0];
		local_sum = max(1LL * 0, local_sum);

		for(int i = 1; i < n; i++){	
			local_sum += num[i];
			if(abs(num[i] - num[i - 1]) % 2 == 0){
				local_sum = num[i];
			}
			else if( num[i] == num[i - 1]){
				local_sum = num[i];
			}			
			mx_sum = max(mx_sum, local_sum);

			local_sum = max(1LL * 0, local_sum);
		}

		cout << mx_sum << endl;
	}

	


	return 0;
}
