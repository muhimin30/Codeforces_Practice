#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';


int n, k;
vector<int> num;

bool check(ll m){
	int cnt = 1;

	ll sum = 0;

	for(int i = 0; i < n; i++){
		if(num[i] > m) return false;
		sum += 1LL * num[i];

		if(sum > m){
			cnt++;
			sum = 1LL * num[i];
		}
	}

	return (cnt <= k);
}

int main()
{
	bismillah();
	

	cin >> n >> k;

	for(int i = 0; i < n; i++){
		int temp; cin >> temp;
		num.push_back(temp);
	}

	ll l = 1, r = 1e14;

	ll ans = 0;
	while(l <= r){
		ll mid = l + (r - l) / 2;

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
