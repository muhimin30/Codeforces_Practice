//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
const int N = 1e5 + 123;
vector<int> pref(N);
void calculate(){
	pref[1] = 1;
	pref[2] = 0;
	pref[3] = 1;

	for(int i = 4; i < N; i +=3){
		pref[i] = pref[i - 3] + 1;
	}
	for(int i = 5; i < N; i +=3){
		pref[i] = pref[i - 3] + 1;
	}
	for(int i = 6; i < N; i +=3){
		pref[i] = pref[i - 3] + 1;
	}
}
int main()
{
	bismillah();
	calculate();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> num(n);
		vector<ll> ans(n);

		for(int i = 0; i < n; i++) cin >> num[i];
		
		ans[0] = num[0];
		ll sum = num[0];
		int odd = 0;
		if(num[0] % 2) odd++;

		for(int i = 1; i < n; i++){
			if(num[i] % 2) odd++;
			sum += num[i];
			ans[i] = sum -  pref[odd];
		}
		for(auto a: ans) cout << a << ' ';
		cout << endl;		
	}


	return 0;
}
