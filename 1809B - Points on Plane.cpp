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
	int ans;
	while(t--){
		ll n; cin>> n;

		if(n == 1){
			ans = 0;
		}
		else if(ceil(sqrtl(n)) == floor(sqrtl(n))){
			ans = sqrtl(n) - 1;
		}
		else{
			ans = sqrtl(n);
		}

		 
		cout << ans << endl;
	}

	return 0;
}
