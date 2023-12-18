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
		int n, k; cin >> n >> k;

		vector<pair<int, int>> estimate(n);
		vector<pair<int, int>> actual(n);

		for(int i = 0; i < n; i++){
			cin >> estimate[i].first;

			estimate[i].second = i;
		}

		sort(estimate.begin(), estimate.end());

		for(int i = 0; i < n; i++){
			cin >> actual[i].second;
		}
		sort(actual.begin(), actual.end());

		for(int i = 0; i < n; i++){
			actual[i].first = estimate[i].second;
		}

		sort(actual.begin(), actual.end());

		for(auto a: actual) cout << a.second << ' ';

		cout << endl;
	}

	return 0;
}
