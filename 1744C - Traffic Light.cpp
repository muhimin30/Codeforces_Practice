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
		int n; char r; cin >> n >> r;

		string s; cin >> s;
		s += s;

		vector<int> ans;
		int cnt = 0;
		bool check = false;
		for(int i = 0; i < 2 * n; i++){
			if(s[i] == r && !check){
				check = true;
				cnt = 0;
			}

			if(check){
				if(s[i] == 'g'){
					ans.push_back(cnt);
					cnt = 0;
					check = false;
				}
				else{
					cnt++;
				}
			}
		}

		sort(ans.begin(), ans.end());

		cout << ans.back() << endl;
	}

	return 0;
}
