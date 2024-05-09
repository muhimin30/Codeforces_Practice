//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		vector<int> num(n);

		int mn = 1e8;
		for(int i = 0; i < n; i++){
			cin >> num[i];
			mn = min(mn, num[i]);
		}

		mn = (mn * 2) - 1;

		ll cnt = 0;
		for(int i = 0; i < n; i++){
			if(num[i] > mn){
				int temp = num[i] - mn;
				cnt += ceil((double)temp / mn);
			}
		}

		cout << cnt << endl;


	}

	return 0;
}
