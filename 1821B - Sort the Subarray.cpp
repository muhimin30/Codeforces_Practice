//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n'

int main()
{
	bismillah();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> num1(n + 1);
		vector<int> num2(n + 1);

		for(int i = 1; i <= n; i++){
			cin >> num1[i];
		}
		for(int i = 1; i <= n; i++){
			cin >> num2[i];
		}
		vector<pair<int, pair<int, int>>> ans;
		int cnt  = 1, l = 1, r = 1;
		for(int i = 2; i <= n; i++){
			if(num2[i] >= num2[i - 1]){
				cnt++;
				r = i;
			}
			else{
				ans.push_back({cnt, {l, r}});
				cnt = 1;
				l = i, r = i;
			}
		}
		ans.push_back({cnt, {l, r}});
		for(int i = 0; i < ans.size(); i++){
			bool check = false;
			l = ans[i].second.first, r = ans[i].second.second;

			for(int j = l; j <= r; j++){
				if(num1[j] != num2[j]){
					check = true;
					break;
				}
			}

			if(!check){
				ans[i].first = 0;
			}	
		}
		sort(ans.rbegin(), ans.rend());
		cout << ans[0].second.first << ' ' << ans[0].second.second << endl;
	}

	return 0;
}
