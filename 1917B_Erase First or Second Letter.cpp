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
		map<char,int> num;

		string s; cin >> s;

		int temp = 0;
		
		ll cnt = 0;
		for(int i = 0; i < n; i++){
			if(num[s[i]] == 0){
				num[s[i]]++;
				temp = ++temp;
				
			}
			cnt += 1LL * temp;
		}

		cout << cnt << endl;
	}

	return 0;
}
