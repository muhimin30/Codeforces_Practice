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
		vector<int> ans;
		bool check = true;
		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		if(num[0] != n){
			cout << "NO" << endl;
		}
		else{
			for(int i = n - 1; i >= 0; i--){
				while(ans.size() < num[i]){
					ans.push_back(i + 1);
				}
			}
			for(int i = 0; i < n; i++){
				if(num[i] != ans[i]){
					check = false;
					break;
				}
			}
			cout << ((check)? "YES" : "NO") << endl;
		}


	}

  return 0;
}
