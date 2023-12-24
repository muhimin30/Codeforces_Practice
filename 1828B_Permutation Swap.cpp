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
		int n ; cin >> n;

		vector<pair<int, int>> num(n);

		for(int i = 0; i < n; i++){
			cin >> num[i].first;

			num[i].second = i + 1;
		}

		

		int mx = 0;

		for(auto a: num){
			int temp = abs(a.first - a.second);

			if(temp > 0){
				mx = __gcd(mx, temp);
			}
		}

		cout << mx << endl;
	}

	return 0;
}
