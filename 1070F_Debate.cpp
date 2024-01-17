	#include <bits/stdc++.h>
	using namespace std;


	typedef vector<int> vi;

	#define ll long long
	#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
	#define endl '\n';
	#define all(v) v.begin(),v.end()
	#define allr(v) v.rbegin(),v.rend()

	void solve()
	{
		int n; cin >> n;
		vi alice, bob, none, ans;
		int a = 0, b = 0;
		ll sum = 0;
		for(int i = 0;i < n; i++){
			string s; int n; cin >> s >> n;

			if(s == "11") {
				ans.push_back(n);
				a++;
			}

			if(s == "10") alice.push_back(n);

			if(s == "01") bob.push_back(n);

			if(s == "00") none.push_back(n);
		}

		//cout << ans.size() << endl;
		sort(alice.rbegin(), alice.rend());
		sort(bob.rbegin(), bob.rend());

		int sz = min(alice.size(), bob.size());
		for(int i = 0; i < sz; i++){
			ans.push_back(alice[i]);
			ans.push_back(bob[i]);
			a++;			
		}

		//cout << sum << ' ' << a  << endl;
		for(int i = sz; i < alice.size(); i++){
			none.push_back(alice[i]);
		}
		for(int i = sz; i < bob.size(); i++){
			none.push_back(bob[i]);
		}
		

		sz = (a * 2) - ans.size();

		int temp = none.size();
		sz = min(sz, temp);

		sort(none.rbegin(), none.rend());
		for(int i = 0; i < sz; i++ ){
			ans.push_back(none[i]);
		}


		for(int i = 0; i < ans.size(); i++){
			sum += 1LL * ans[i];
		}
		

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


