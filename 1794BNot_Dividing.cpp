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
		int n, first; cin >> n;
		vector<int> num(n);

		for(int i  = 0; i < n; i++){
			cin >> num[i];
		}

		if(num[0] == 1){
			num[0]++;
		}

		for(int i = 1; i < n; i++){
		if(num[i] == 1){
			num[i]++;
		}
			if(num[i] % num[i - 1] == 0){
				num[i]++;
			} 
		}

		for(auto a: num) cout << a << ' ';
		cout << endl;
		
	}

	return 0;
}
