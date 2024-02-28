//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int n, m; cin >> n >> m;

	vector<int> a(n);	
	vector<int> b(m);

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < n; i++){
		cin >> b[i];
	}

	vector<int> ans(n);

	int ind = 0;
	for(int i = 0; i < n; i++){
		if(i > 0){
			if(a[i] == a[i - 1]){
				ans[i] = ans[i - 1];
				continue;
			}
		}
		int cnt = 0;
		for(int j = ind; j < m; j++){
			cout << a[i] << ' ' << b[j] << endl;
			if(a[i] == b[j]){
				cnt++;
				ind = j + 1;
			}
			else if(a[i] < b[j]){
				ind = j;
				break;
			}
			if(ind == m) break;
		}
		ans[i] = cnt;
		cnt = 0; 
	}
	ll sum = 0;
	for(auto a: ans) sum += a;
	//cout << endl;

	cout << sum << endl;

}


int main()
{
	bismillah();

	int t = 1;

	//cin >> t;	

	while(t--){
		solve();
	}

}


