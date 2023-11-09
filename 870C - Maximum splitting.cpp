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

		if((n % 2 == 1 && n <= 11 && n != 9) || n < 4){
			cout << -1 << endl;
		}
		else{
			if(n % 2 == 0){
				cout << n / 4 << endl;
			}
			else{
				cout << (n / 4) - 1 << endl;
			}
		}
	}


  return 0;
}
