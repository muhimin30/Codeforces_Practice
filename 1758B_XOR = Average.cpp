#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();

	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		if(n % 2 == 1){
			for(int i = 0; i < n; i++) cout << n << ' ';
			cout << endl;
		}
		else{
			cout << 1 << ' ';
			for(int i = 0; i < n - 1; i++) cout << n + 1 << ' ';
			cout << endl;
		}
	}

	return 0;
}
