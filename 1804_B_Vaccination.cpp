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
		int n, k, d, w; cin >> n >> k >> d >> w;
		vector<int> num(n);

		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		int veccine_cnt = 0, remain = k;
		ll valid = 0;
		for(int i = 0; i < n; i++){
			if(i == 0 || valid < num[i] || remain == 0){
				veccine_cnt++;
				valid = 1LL * num[i] + w + d;
				remain = k;
			}
			remain--;
		}

		cout << veccine_cnt << endl;
	}

	return 0;
}
