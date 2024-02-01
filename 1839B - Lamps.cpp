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

		map<int, vector<int>> mp;

		for(int i = 0; i < n; i++){
			int a, b; cin >> a >> b;
			mp[a].push_back(b);
		}
		ll sum = 0;
		for(auto a: mp){
			sort(a.second.rbegin(), a.second.rend());
			int sz = a.second.size();

			int x = min(sz, a.first);

			for(int i = 0; i < x; i++){
				sum += a.second[i];
			}
		}


		cout << sum << endl;
	}

	return 0;
}
