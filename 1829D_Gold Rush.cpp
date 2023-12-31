#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

bool check = false;


void req(int n,int m, vector<bool> &mem){

	


	if(n == m){
		check = true;
		return;
	}
	if(check || n < m || n % 3 != 0){
		return;
	}

	if(!mem[n / 3]){
		mem[n / 3] = true;
		req((n / 3), m, mem);
	}
	 
	if(!mem[n - (n / 3)]){
		mem[n - (n / 3)] = true;
		req(n - (n / 3), m, mem);
	}
 
}

int main()
{
	bismillah();

	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;

		if(n == m){
			cout << "YES" << endl;
			continue;
		}
		if(n % 3 != 0 || n < m){
			cout << "NO" << endl;
			continue;
		}
		check = false;

		vector<bool> mem(10000009);

		req(n, m, mem);

		cout << ((check) ? "YES": "NO" )<< endl;


	}

	return 0;
}
