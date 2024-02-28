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
		vector<int> num(n);

		for(int i = 0; i < n; i++){
			cin >> num[i];
		}	
		vector<pair<int, int>> p; 
		for(int i = 0, j = n - 1; i < j; i++, j--){
			p.push_back({num[i], num[j]});
		}
		vector<int> def;
		for(auto a : p) def.push_back(abs(a.first - a.second));
		bool check = true;
		int gcd = 0;
		for(int i = 0; i < def.size(); i++){
			if(def[i] != 0){
				check = false;
			}
			gcd = __gcd(gcd, def[i]);
		}

		cout << ((check)? 0 : gcd) << endl;
	}

	return 0;
}
