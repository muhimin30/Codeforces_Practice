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
		vector<vector<int>> num(n);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n - 1; j++){
				int temp; cin >> temp;
				num[i].push_back(temp);
			}
		}
		int a = num[0][0], b = num[0].back();

		bool check = false;
		int k = 0;
		while(!check){
			a = num[k][0], b = num[k].back();
			for(int i = 0; i < n; i++){
				if(i == k) continue;
					for(int j = 1; j < n - 1; j++){
						if(num[i][j] == a){
							cout << num[i][j - 1] << ' ';
							check = true;
						}
						if(check) break;
					}
				if(check) break;
			}
			if(!check){
					for(int i = 0; i < n; i++){
						if(i == k) continue;
						for(int j = 0; j < n - 2; j++){
							if(num[i][j] == b){
								num[k].push_back(num[i][j + 1]);
								check = true;
							}
							if(check) break;
						}
						if(check) break;
					}
			}
			if(check){
				for(auto a: num[k]) cout << a << ' ';
				cout << endl;
				break;
			}
			k++;
		}
	}
	return 0;
}