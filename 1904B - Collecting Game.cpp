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
		vector<pair<int, int>> num(n);

		for(int i = 0; i < n; i++){
			cin >> num[i].first;
			num[i].second = i + 1;
		}

		sort(num.begin(), num.end());

		vector<ll> q_sum(n);
		vector<int> sorted(n);
		q_sum[0] =1LL * num[0].first;
		sorted[0] = num[0].first;

		for(int i = 1; i < n; i++){
			sorted[i] = num[i].first;
			q_sum[i] = q_sum[i - 1] + num[i].first;
		}
		for(int i = n - 2; i >= 0; i--){
			if(sorted[i] == sorted[i + 1]){
				q_sum[i] = q_sum[i + 1];
			}
		}


		// for(auto a: sorted) cout << a << ' ';
		// cout << endl;
		// for(auto a: q_sum) cout << a << ' ';
		// cout << endl;

		for(int i = 0; i < n; i++){
			int ans = 0;
			int l = 0, r = n - 1;

			while(l <= r){
				int mid = l + (r - l ) / 2;

				if(sorted[mid] <= q_sum[i]){
					ans = mid;
					l = mid + 1;
				}
				else{
					r = mid - 1;
				}
			}
			int a = sorted[ans], b = q_sum[ans];
			while(ans < n - 1){
				if(sorted[ans + 1] > q_sum[ans]) break;

				ans++;
			}
			num[i].first = ans;
		}


		for(int i = 0; i < n; i++){
			swap(num[i].first, num[i].second);
		}

		sort(num.begin(), num.end());

		for(auto a: num) cout << a.second << ' ';
		cout << endl;

		



	}

	return 0;
}
