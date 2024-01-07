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
		vector<int> num(n + 1);
		vector<int> ans(n + 1);

		int gcd = 0;
		for(int i = 1; i <= n; i++){
			cin >> num[i];
			gcd = __gcd(gcd, num[i]);
		}
		if(gcd == 1){
			cout << 0 << endl;
		}
		else if(__gcd(gcd, n) == 1){
			cout << 1 << endl;
		}
		else if(__gcd(gcd, n - 1) == 1){
			cout << 2 << endl;
		}
		else{
			cout << 3 << endl;
		}
	}

	return 0;
}
