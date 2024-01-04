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

		if(n == 3){
			cout << "NO" << endl;
		}
		else if(n % 2 == 0){
			cout << "YES" << endl;
			for(int i = 1; i <= n; i++){
				cout << ((i % 2) ? "2 " : "-2 ");
			}
			cout << endl;
		}
		else{
			cout << "YES" << endl;

			int b = n / 2, a = b - 1;

			for(int i = 1; i <= n; i++){
				if(i % 2 == 1){
					cout << a << ' ';
				}
				else{
					cout << "-" << b << ' ';
				}
			}
			cout << endl;
			
		}
	}

	return 0;
}
