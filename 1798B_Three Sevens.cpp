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
		int m; cin >> m;
		map<int, int> num;
		vector<int> str[m];
		vector<int> ans;

		// take input
		for(int i = 0; i < m; i++){
			int n; cin >> n;

			for(int j = 0; j < n; j++){
				int temp; cin >> temp;
				str[i].push_back(temp);
				num[temp]++;
			}
		}


		//check possibility 
		bool check = false;
		for(int i = 0; i < m-1; i++){
			if(str[i].size() == str[i+1].size()){
				sort(str[i].begin(), str[i].end());
				sort(str[i+1].begin(), str[i+1].end());
			}

			if(str[i] == str[i + 1]){
				check = true;
				break;
			}
		}
		if(check){
			cout << -1 << endl;
		}
		else{
			bool cancel = false;
			for(int i = 0; i < m; i++){
				//if any freq == 1;
				bool cont = false;
				for(int j = 0; j < str[i].size(); j++){
					num[str[i][j]]--;
					if(num[str[i][j]] == 0 && !cont){
						ans.push_back(str[i][j]);
						num[str[i][j]] = 0;
						cont = true;
					}
				}
				if(!cont){
					cancel = true;
					break;
				}				
			}

			if(cancel){
				//cout << ans << endl;
				cout << -1 << endl;
				continue;
			}

			for(auto a: ans) cout << a << ' ';
			cout << endl;

		}
	}

	return 0;
}
