#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int md = 1e9 + 7;
int main()
{
	bismillah();

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll cnt = n - 1;

		for(int i = 2; i <= n; i++){
			cnt = (cnt + (n - 1) % md) % md;
		} 

		if(n == 1){
			cout << 0 << endl;
		}
		else{
			for(int i = 1; i <= n; i++){
				cnt = (cnt * i) % md;
			}
			cout << cnt << endl;
		}
	}

	return 0;
}
