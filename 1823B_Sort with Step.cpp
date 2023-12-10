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

		vector<int> num(n + 1);

		int cnt = 0;
		for(int i = 1; i <= n; i++){
			cin >> num[i];

			if(abs(num[i] - i) % k != 0){
				cnt++;
			}
		}


		if(cnt == 0 || k == 1){
			cout << 0 << endl;
		}
		else if(cnt == 2){
			cout << 1 << endl;
		}
		else{
			cout << -1 << endl;
		}

	}

	return 0;
}
