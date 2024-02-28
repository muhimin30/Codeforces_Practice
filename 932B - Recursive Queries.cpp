//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

ll a, b, k;
bool ch = false;
void check(ll x){
	ll prod = 1;
	while(x > 0){
		ll y = x % 10;

		if(y > 0){
			prod *= y;
		}

		x /= 10;
	}

	if(prod > 0){
		if(prod == k){
			ch = true;
			return;
		}
		check(prod);
	}
	else{
		return;
	}
}

int main()
{
	bismillah();
	int q; cin >> q;
	while(q--){
		cin >> a >> b >> k;
		cout << a << b << endl;

		int cnt = 0;
		for(ll i = a; i <= b; i++){
			check(i);

			if(ch)cnt++;

			ch = false;

		}

		cout << cnt << endl;
		
	}

	return 0;
}
