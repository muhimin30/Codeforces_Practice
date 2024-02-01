//Muhimin
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

	vector<int> num(n);

	ll sum = 0;
	bool pos = false, neg = false;
	int mx = -1e9, mn = 1e9;
	for(int i = 0; i < n; i++){
		cin >> num[i];
		sum += 1LL * abs(num[i]);

		mx = max(mx, num[i]);
		mn = min(mn, num[i]);
		if(num[i] < 0){
			neg = true;
		}
		else{
			pos = true;
		}
	}

	if(n == 1){
		cout << num[0] << endl;
	}
	else if(pos && neg){
		cout << sum << endl;
	}
	else if(pos){
		cout << sum - (2 * mn) << endl;
	}
	else{
		cout << sum + (2 * mx) << endl;
	}

	return 0;
}
