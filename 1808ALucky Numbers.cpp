#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int def(int x){
	string s = to_string(x);

	//cout << s << endl;
	int mx = -1, mn = 10;
	for(int i = 0; i < s.size(); i++){
		mx = max(mx, s[i] - '0');
		mn = min(mn, s[i] - '0');
	}

	return mx - mn;
}

int main()
{
	bismillah();
	int t; cin >> t;

	while(t--){
		int a, b; cin >> a >> b;


		int ans = a;
		int temp_def = 0;
		for(int i = a; i <= b; i++){
			int temp = def(i);
			if(temp > temp_def){
				temp_def = temp;
				ans = i;
			}

			//cout << temp << endl;

			if(temp == 9) break;
		}
		cout << ans << endl;
	}



	return 0;
}
