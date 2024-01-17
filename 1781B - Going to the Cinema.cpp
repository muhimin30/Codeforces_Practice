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


		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		sort(num.begin(), num.end());

		int ans = 1;
		int cnt = 0;

		if(num[0] != 0) ans++;	
		for(int i = 0; i < n - 1; i++){
			cnt++;

			if(cnt < num[i + 1] && num[i] < cnt) ans++;
		}

		cout << ans << endl;


	}
	return 0;
}