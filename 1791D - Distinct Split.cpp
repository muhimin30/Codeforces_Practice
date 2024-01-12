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

		map<char, int> m;
		map<char, int> all_freq;
		string s; cin >> s;

		int cnt = 0;
		vector<int> ans;

		string temp;
		for(int i = 0; i < s.size(); i++){
			all_freq[s[i]]++;
		}
		
		for(int i = 0; i < s.size(); i++){
			m[s[i]]++;
			all_freq[s[i]]--;
			if(all_freq[s[i]] == 0) all_freq.erase(s[i]);

			int temp = m.size() + all_freq.size();
			cnt = max(cnt , temp);
		}

		cout << cnt << endl;
	}

	
	return 0;
}
