#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int n, k;

vector<int> num(10123);


bool check(double m){
	ll cnt = 0;
	for(int i = 0; i < n; i++){
		cnt += (double)num[i] / m;
	}

	if(cnt >= k){
		return true;
	}
	else{
		return false;
	}
}
int main()
{
	bismillah();


 	cin >> n >> k;

	for(int i = 0; i < n; i++){
		cin >> num[i];
	}

	double l = 0.0, r = 1e12 + 0.0;

	double ans;
	while(l <= r){
		double mid = (l + r) / 2.0;

		if(check(mid)){
			ans = mid;
			l = mid + 0.01;
		}
		else{
			r = mid - 0.01;
		}
	} 

	cout << fixed << setprecision(1) << ans << endl;
	return 0;
}
