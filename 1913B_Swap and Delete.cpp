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
		string s; cin >> s;
		int n = s.size();
		int one = 0, zero = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == '0') zero++;
			else one++;
		}

		if(zero == one){
			cout << 0 << endl;
			continue;
		}
		int ans;
		for(int i = 0; i < n; i++){
			if(s[i] == '1'){
				if(zero == 0){
					ans = n - i;
					break;
				}
 				zero--;
			}
			else{
				if(one == 0){
					ans = n - i;
					break;
				}
 				one--;
			}
		}

		cout << ans << endl;

	}

	return 0;
}
