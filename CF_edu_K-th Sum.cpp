#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int n; ll k; 

vector<int>a;
vector<int>b;

int fix(ll m){
	return upper_bound(b.begin(), b.begin() + n, m) - b.begin();
}

bool check(ll m){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		//cout << m << ' ' << i << ' ' << a[i] << endl;
		ll temp = m - a[i];

		cnt += fix(temp);
	}
	//cout << endl;
	return(cnt >= k);
}


int main()
{
	bismillah();
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		int temp; cin >> temp;
		a.push_back(temp);
	}
	for(int i = 1; i <= n; i++){
		int temp; cin >> temp;
		b.push_back(temp);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	ll l = 0, r = 2e9;

	ll ans = 0;
	while(l <= r){
		ll mid =1LL * l + (r - l)/ 2;

		if(check(mid)){
			ans = mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}

	cout << ans << endl;

	return 0;
}
