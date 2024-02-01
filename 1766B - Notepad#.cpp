//Muhimin
#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		map<string, int> freq;

		for(int i = 1; i < n; i++){
			string temp;

			temp.push_back(s[i - 1]);
			temp.push_back(s[i]);
			freq[temp]++;
		}

		bool check = false;

		for(auto a: freq){
			if(a.second > 1){
				if(a.first[0] != a.first[1]){
					check = true;
				}
				else{
					int i = 0;
					int cnt = 0;
					for(i = 0; i < n - 1; i++){
						if(s[i] == a.first[0] && s[i + 1] == a.first[1]){
							cnt++;
							i++;
						}
					}

					if(cnt >= 2) check = true;
				}
			}
		}

		cout << ((check) ? "YES" : "NO") << '\n';
	}
}