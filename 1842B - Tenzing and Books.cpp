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
		ll n, k; cin >> n >> k;
		vector<int> a(n);
		vector<int> b(n);
		vector<int> c(n);

		for(int i = n - 1; i >= 0; i--){
			cin >> a[i];
		}
		for(int i = n - 1; i >= 0; i--){
			cin >> b[i];
		}
		for(int i = n - 1; i >= 0; i--){
			cin >> c[i];
		}

		ll x = 0;
		bool check = false;

		while(!a.empty() || !b.empty() || !c.empty()){
			//cout << x << endl;
			if(x == k){
				check = true;
				break;
			}

			bool f = true;
			if(a.size() > 0){
				if((k | a.back()) == k){
					x |= a.back();
					f = false;
					a.pop_back();
				}
			}
			if(b.size() > 0){
				if((k | b.back()) == k){
					x |= b.back();
					f = false;
					b.pop_back();
				}
			}
			if(c.size() > 0){
				if((k | c.back()) == k){
					x |= c.back();
					f = false;
					c.pop_back();
				}
			}
			if(f) break;			
		}
		if(x == k){
				check = true;
		}
		cout << ((check) ? "YES" : "NO") << endl;
	}

	

	return 0;
}
