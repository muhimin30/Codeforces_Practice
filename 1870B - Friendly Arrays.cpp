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

		vector<int> a(n);
		vector<int> b(m);
		int ans1 = 0, ans2 = 0, ans3 = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ans1 ^= a[i];
		}
		bitset<32> b_on;
		int b_or = 0;
		int mn = 1e9;
		int mn_on = 32;
		for(int i = 0; i < m; i++){
			cin >> b[i];
			b_on = b[i];
			int on = 0;
			for(int i = 0; i < b_on.size(); i++){
				if(b_on[i] == 1) on++;
			}
			b_or |= b[i];
			if(on < mn_on){
				mn_on = on;
				mn= b[i];
			}
		}

		for(int i = 0; i < n; i++){
			ans2 ^= (a[i] | mn);
			ans3 ^= (a[i] | b_or);
		}

		cout << min(ans1, min(ans2, ans3)) << ' ' << max(ans1, max(ans2, ans3)) << endl;
	}

	return 0;
}
