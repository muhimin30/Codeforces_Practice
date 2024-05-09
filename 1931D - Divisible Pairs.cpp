//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	int n, x, y; cin >> n >> x >> y;

	vector<pair<int, int>> num;
	map<pair<int, int>, int> mp;
	for(int i = 0; i < n; i++){
		int temp; cin >> temp;
		int x_m = temp % x;
		int y_m = temp % y;
		num.push_back({x_m, y_m});

		mp[{x_m, y_m}]++;
	}

	ll cnt = 0;
	for(int i = 0; i < n; i++){
		int x_need = (x - num[i].first) % x;
		int y_need = num[i].second;

		
		if(x_need == num[i].first && y_need == num[i].second){
			//cout << "inside loop : " << mp[{x_need, y_need}] << endl;
			cnt += mp[{x_need, y_need}] - 1;
			
		}
		else{
		cnt += mp[{x_need, y_need}];
		}
		//cout << mp[{x_need, y_need}] << endl;
		mp[{num[i].first, num[i].second}]--;
		//cout << endl;
	}

	cout << cnt << endl;
}


int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);

 int t = 1;
 cin >> t;
 while(t--){
		solve();
 }

}


