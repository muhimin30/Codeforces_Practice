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
		vector<int> num(n + 1);
		vector<int> ans(n + 1);
		ll sum = 0;
		for(int i = 1; i <= n; i++){
			cin >> num[i];
			sum += 1LL * num[i];
		}

		int mex = (int)((1LL * n * (n + 1)) / 2) - sum;

		int mex_pos = k % (n + 1);

		//cout << mex << ' ' << mex_pos << endl;

		ans[mex_pos] = mex;
		int j = 1;
		for(int i = mex_pos + 1; i <= n; i++){
			ans[i] = num[j];
			j++;
		}

		//cout << mex_pos << ' ' << j << endl;

		for(int i = j + 1; i <= n; i++){
			cout << num[i] << ' ';
		}
		for(int i = mex_pos; i <= n; i++){
			if(i == 0) continue;
			cout << ans[i] << ' ';
		}
		cout << endl;
		//cout << endl;
	}

  	return 0;
}
