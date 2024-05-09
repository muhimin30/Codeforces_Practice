//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	int n; cin >> n;
	int sz = n;

	int b_len = (n * (n - 1)) / 2;
	vector<int> b(b_len);
	for(int i = 0; i < b_len; i++){
		cin >> b[i];
	}

	sort(b.begin(), b.end());
	vector<int> ans;

	for(int i = 0; i < b_len; i += (--sz)){
		ans.push_back(b[i]);
	}
	while(ans.size() < n){
		int temp = ans.back();

		ans.push_back(temp);
	}

	for(auto a: ans) cout << a << ' ';

	cout << endl;

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


