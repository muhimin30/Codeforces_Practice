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
		string a, b;
		cin >> a >> b;
		int ans = 0;
		int a_s = a.size(), b_s = b.size();
		if(a_s < b_s){
			ans += b[0] - '0';

			ans += (b_s - 1) * 9; 
		}
		else{
			bool same = true;
 
			for(int i = 0; i < a.size(); i++){
				if(same){
					ans += abs(a[i] - b[i]);
				}
 
 
				if(a[i] != b[i]){
					ans += (a.size() - (i + 1) ) * 9;
					break;
				}
			}
		}
		

		cout << ans << endl;

	}

	return 0;
}
