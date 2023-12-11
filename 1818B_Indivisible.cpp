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

		vector<int> num(n + 1);

		if(n == 1){
			cout << 1 << endl;
			continue;
		}
		else if(n % 2 == 1){
			cout << - 1 << endl;
		}
		else{
			for(int i = 1; i <= n; i += 2){
				num[i] = i + 1;
				num[i + 1] = i;
			}

			for(int i = 1; i <= n; i++){
				cout << num[i] << ' ';
			}
			cout << endl;
		}
	}

	return 0;
}
