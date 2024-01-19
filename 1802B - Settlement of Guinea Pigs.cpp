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
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> num(n);

		for(int i = 0; i< n; i++){
			cin >> num[i];
		}

		int with_out_test = 0, alocated = 0, need = 0;
		int ans = 0;
		for(int i = 0; i < n; i++){
			if(num[i] == 1){
				with_out_test++;
				ans = max(ans, need + with_out_test);
			}
			if(num[i] == 2){
				if(with_out_test == 0) continue;
				alocated += with_out_test;
				if(alocated % 2 == 0){
					need = (alocated / 2) + 1;
				}
				else{
					need = ceil(alocated / 2.0);
				}
				ans = max(ans, need);
				with_out_test = 0;
			}
			//cout << i << " | All: " << all << " | Ans : " << ans << " | " << remain << endl;
		}

		cout << ans << endl;
	}

	return 0;
}
