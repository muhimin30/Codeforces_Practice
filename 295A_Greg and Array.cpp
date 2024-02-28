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
	int n, m, k; cin >> n >> m >> k;
	vector<ll> num(n + 2);
	vector<ll> temp(n + 2);
	vector<ll> ai(n + 2);
	vector<int> task[m + 2];
	vector<ll> freq(m + 2);

	for(int i = 1; i <= n; i++){
		cin >> num[i];
		ai[i] = num[i];
	}
	// for(auto a: num) cout << a << ' ';
	// cout << endl;

	for(int i = 1; i <= m; i++){
		int a, b, c; cin >> a >> b >> c;
		task[i].push_back(a);
		task[i].push_back(b);
		task[i].push_back(c);
	}

	for(int i = 1; i <= k; i++){
		int l, r; cin >> l >> r;

		freq[l]++;
		freq[r + 1]--;
	}

	for(int i = 1; i <= m; i++){
		freq[i] += freq[i - 1];
	}

	// for(int i = 1; i <= m; i++){
	// 	for(auto a: task[i]) cout << a << ' ';
	// 	cout << endl;
	// }

	for(int i = 1; i <= m; i++){
		temp[task[i][0]] += (task[i][2] * freq[i]); 
		temp[(task[i][1]) + 1] -= (task[i][2] * freq[i]); 
	}
	for(int i = 1; i <= n; i++){
		num[i] = temp[i] + num[i - 1];		
	}
	for(int i = 1; i <= n; i++){
		num[i] += ai[i];		
	}

	for(int i = 1; i <= n; i++){
		cout  << num[i] << ' ';
	}
	cout << endl;

	return 0;
}
	 	