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

		string ans;

		int cnt = 0;

		for(int i = 0; i < s.size(); i++){
			if(ans.empty() && s[i] == '?'){
				ans.push_back('0');
			}
			else if(s[i] == '?'){
				cnt++;
			}
			else if(ans.back() == '0' && (s[i] == '1' || s[i] == '0' )){
				for(int i = 0; i < cnt; i++){
					ans.push_back('0');
				}
				cnt = 0;
				ans.push_back(s[i]);
			}
			else{
				for(int i = 0; i < cnt; i++){
					ans.push_back('1');
				}
				cnt = 0;
				ans.push_back(s[i]);
			}
					
		}
		for(int i = 0; i < cnt; i++){
					ans.push_back('1');
		}	

		cout << ans <<endl;
	}

	return 0;
}
