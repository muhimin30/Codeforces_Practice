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
	int n, m; cin >> n >> m;
	vector<int> num(n);
	vector<int> num2(m);
	vector<int> ans(m);

	for(int i = 0; i < n; i++) cin >> num[i];
	for(int i = 0; i < m; i++) cin >> num2[i];

	int j = 0;
	for(int i = 0; i < n; i++){

		if(j == m) break;
		while(num[i] >= num2[j]){			
			j++;
			if(j == m) break;
		}
		if(j < m){
			ans[j]++;
		}
	}
	// for(auto a: ans) cout << a << ' ';
	// cout << endl;

	for(int i = 1; i < m; i++){
		ans[i] += ans[i - 1];
	}
	for(auto a: ans) cout << a << ' ';
	cout << endl;
	return 0;
}
