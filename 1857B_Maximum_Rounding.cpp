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
		int mx = s.size();
		for(int i = s.size() - 1; i >= 0; i--){
			if(s[i] - '0' >= 5){
				mx = i;
				if(i != 0){
					s[i - 1]++;
				}
			}
		}
		if(mx == s.size()){
			cout << s << endl;
			continue;
		}
		if(mx == 0){
			cout << 1;
			for(int i = 0; i < s.size(); i++){
				cout << 0;
			}
		}
		else{
			for(int i = 0; i < mx; i++){
				cout << s[i];
			}
			for(int i = mx; i < s.size(); i++){
				cout << 0;			
			}		
		}
		cout << endl;
		
	}

  return 0;
}
