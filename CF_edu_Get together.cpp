#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

const int mx = 1e9 + 23;
const int mn = -1e9 - 23;
vector<int> cordinate;
vector<int> speed;
int n;

bool check(double m){
	//cout << m << endl;
	double left_mx = -1e9;
	double right_mn = 1e9;
	for(int i = 0; i < n; i++){
		double a = cordinate[i] - ((double)m * speed[i]);
		double b = cordinate[i] + ((double)m * speed[i]);
		

		//cout << a << ' ' << b << endl;
		left_mx = max(left_mx, a);
		right_mn = min(right_mn, b);
	}
// //	cout << m << endl;
// 	cout << left_mx << ' ' << right_mn << endl;
// 	cout << endl;
	return (right_mn >= left_mx);
}

int main()
{
	bismillah();

	cin >> n;


	int left = mx;
	int right = mn, mn_speed = mx;
	for(int i = 0; i < n; i++){
		int a, b; cin >> a >> b;
		cordinate.push_back(a);
		speed.push_back(b);
		mn_speed = min(mn_speed, b);
		left = min(left, a);
		right = max(right, a);
	}

	double l = 0, r = 1e18;
	//cout << r - l << endl;

	double ans = 0;
	int it = 100;
	while(it--){
		double m = l + (r - l) / 2;
		//cout << m << endl;

		if(check(m)){
			//cout << m << endl;
			ans = m;
			r = m;
		}
		else{
			//cout << 'l' << ' ' << m << endl;
			l = m;
		}
	}

	cout << fixed << setprecision(7) << ans << endl;


	return 0;
}
