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
		vector<ll> num(n);
		bool odd = false, even = false;
		for(int i = 0; i < n; i++){
			cin >> num[i];
			if(num[i] & 1){
				odd = true;
			}
			else{
				even = true;
			}
		}

		if(odd && even){
			cout << 2 << endl;
			continue;
		}

		ll val = 4;

		while(1){
			set<ll> mod;

			for(int i = 0; i < n; i++){
				mod.insert(num[i] % val);
			}

			if(mod.size() == 2){
				cout << val << endl;
				break;
			}
			else{
				val = val << 1;
			}	
		}
	}



	return 0;
}
