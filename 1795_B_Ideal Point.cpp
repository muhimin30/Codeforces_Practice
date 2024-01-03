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
		map<int, int> num;
		int n, k; cin >> n >> k;
		for(int i = 0; i < n; i++){
			int l , r; cin >> l >> r;

			if(l <= k && r >= k){
				for(int i = l; i <= r; i++){
					num[i]++;
				}
			}
		}

		if(num[k] == 0){
			cout << "NO" << endl;
		}
		else{
			bool check = true;
			int x_cnt = num[k];
			for(auto a: num){
				if(a.first == k) continue;
				if(a.second == x_cnt) check = false;
			}

			cout << ((check) ? "YES" : "NO") << endl;
		}
	}

	return 0;
}
