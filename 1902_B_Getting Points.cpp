//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int n, lc, tk; ll p;
bool check(int m){
	int week = ceil(n / 7.0);
	int all_weeks = ceil(ceil(n / 7.0)/ 2.0);

	ll sum = 0;
	if(m >= all_weeks){
		ll weekly  = 1LL * all_weeks * tk * 2;;
		if(week % 2 == 1){
			weekly -= tk;
		}
		sum += (1LL * lc * m) +  weekly;
	}	
	else{
		sum += (1LL * lc * m) + (1LL * m * tk * 2);
	}
	//cout << "m: " << m << ",sum: " << sum << " p: " << p <<   endl;


	return (sum >= p);
}

int main()
{
	bismillah();
	int t; cin >> t;
	while(t--){
		cin >> n >> p >> lc >> tk;

		int worked = 0;
		int l = 1, r = n;
		while(l <= r){
			int mid = l + (r - l) / 2;
			if(check(mid)){
				worked = mid;
				r = mid - 1;
			}
			else{
				l = mid + 1;
			}
		}

		cout << n - worked << endl;
	}



	return 0;
}
