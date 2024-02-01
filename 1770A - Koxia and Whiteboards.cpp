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
		int n, m; cin >> n >> m;

		vector<int> a(n + m);

		for(int i = 0; i < n + m; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end() - 1);
		reverse(a.begin(), a.end());

		

		ll sum = 0;

		for(int i = 0; i < n; i++){
			sum += a[i];
		}

		cout << sum << endl;
	}


	return 0;
}
