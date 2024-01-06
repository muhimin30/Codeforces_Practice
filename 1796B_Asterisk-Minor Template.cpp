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
		string a, b; cin >> a >> b;

		map<char, int> a_cnt;
		map<char, int> b_cnt;
		for(int i = 0; i < a.size(); i++){
			a_cnt[a[i]]++;
		}
		for(int i = 0; i < b.size(); i++){
			b_cnt[b[i]]++;
		}

		bool check = true;

		for(auto a: a_cnt){
			if(b_cnt[a.first] > 0){
				cout << b_cnt[a.first] << endl;
				cout << "YES" << endl;
 				cout << '*' << a.first << '*' << endl;
				check = true;
				break;
			}
		}

		if(!check) cout << "NO" << endl;
	}

	return 0;
}
