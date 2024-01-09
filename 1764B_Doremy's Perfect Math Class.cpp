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

	 int gcd = 0, ans;
	 for(int i = 0; i < n; i++){
		int temp; cin >> temp;

		gcd = __gcd(gcd, temp);
		if(i == n - 1) ans = temp / gcd;
	 }

	 cout << ans << endl;
	}

	return 0;
}
