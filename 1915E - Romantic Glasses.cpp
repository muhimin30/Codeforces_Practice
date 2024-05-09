//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	int n; cin >> n;
	vector<int> num(n + 1);

	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}
	map<ll, int> mp;
	vector<ll> pref(n + 1);
	pref[1] = num[1];
	mp[pref[1]]++;
	
	for(int i = 2; i <= n; i++){
		if(i % 2){
			pref[i] = pref[i - 1] + num[i];
		}
		else{
			pref[i] = pref[i - 1] - num[i];
		}
		//cout << pref[i] << endl;

		if(pref[i] == 0){
			cout << "YES" << endl;
			return;
		}
		else if(mp.find(pref[i]) != mp.end()){
			if(pref[i - 1] == pref[i]){

			}
			else{
				cout << "YES" << endl;
				return;
			}
		}
		mp[pref[i]]++;
	}



	cout << "NO" << endl;
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


