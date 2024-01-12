#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();
	int n; cin >> n;

	vector<ll> num(n);

	ll gcd = 0;

	for(int i = 0; i < n; i++){
		cin >> num[i];
		gcd = __gcd(gcd, num[i]);
	}

	int cnt = 0;
	for(ll i = 1; i <= sqrtl(gcd); i++){
		if(gcd % i == 0){
			if(i * i == gcd){
				cnt++;
			}
			else {
				cnt += 2;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}
