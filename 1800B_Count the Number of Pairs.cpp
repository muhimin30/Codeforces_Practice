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
		int n, k; cin >> n >> k;

		string s; cin >> s;
		map<char, int> low;
		map<char, int> up;
		set<char> up_set;
		for(int i = 0; i < s.size(); i++){
			if(s[i] <= 'z' && s[i] >= 'a'){
				low[s[i]]++;
				
			}
			if(s[i] <= 'Z' && s[i] >= 'A'){
				up[s[i]]++;
				up_set.insert(s[i]);
			}
		}

		int cnt = 0;
		for(auto a: up_set){
			char temp = a + 32;
			//cout << a << ' ' << temp << endl;
			int mn = min(low[temp], up[a]);
			cnt += mn;
			low[temp] -= mn;
			up[a] -= mn;
		}
		for(auto a: low){
			if(k <= 0) break;
			int temp = a.second / 2;
			cnt += min(temp, k);
			k -= temp;
		}
		for(auto a: up){
			if(k <= 0) break;
			int temp = a.second / 2;
			cnt += min(temp, k);
			k -= temp;
		}

		cout << cnt << endl;
	}

	return 0;
}
